/*===== Данный бот был создан под заказ для игры TESO ONLINE в рамках обучения основам C++. Использовалась принцип работы  программа ищет на экране 
определенный объект и эмулирует действия игрока */


#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <windows.h>
using namespace cv;

void pressKey(int virtualKey) { // Функция для эмуляции нажатия клавиши
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = virtualKey;
    input.ki.dwFlags = 0; // Нажатие клавиши
    SendInput(1, &input, sizeof(INPUT));
    input.ki.dwFlags = KEYEVENTF_KEYUP; // Отпускание клавиши
    SendInput(1, &input, sizeof(INPUT));
}
BITMAPINFOHEADER createBitmapHeader(int width, int height)
{
    BITMAPINFOHEADER  bi;
    bi.biSize = sizeof(BITMAPINFOHEADER);
    bi.biWidth = width;
    bi.biHeight = -height;
    bi.biPlanes = 1;
    bi.biBitCount = 32;
    bi.biCompression = BI_RGB;
    bi.biSizeImage = 0;
    bi.biXPelsPerMeter = 0;
    bi.biYPelsPerMeter = 0;
    bi.biClrUsed = 0;
    bi.biClrImportant = 0;

    return bi;
}
Mat captureScreenMat(HWND hwnd)
{
    Mat src;
    HDC hwindowDC = GetDC(hwnd);
    HDC hwindowCompatibleDC = CreateCompatibleDC(hwindowDC);
    SetStretchBltMode(hwindowCompatibleDC, COLORONCOLOR);
    int screenx = GetSystemMetrics(SM_XVIRTUALSCREEN);
    int screeny = GetSystemMetrics(SM_YVIRTUALSCREEN);
    int width = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int height = GetSystemMetrics(SM_CYVIRTUALSCREEN);
    src.create(height, width, CV_8UC4);
    HBITMAP hbwindow = CreateCompatibleBitmap(hwindowDC, width, height);
    BITMAPINFOHEADER bi = createBitmapHeader(width, height);
    SelectObject(hwindowCompatibleDC, hbwindow);
    StretchBlt(hwindowCompatibleDC, 0, 0, width, height, hwindowDC, screenx, screeny, width, height, SRCCOPY);
    GetDIBits(hwindowCompatibleDC, hbwindow, 0, height, src.data, (BITMAPINFO*)&bi, DIB_RGB_COLORS);
    DeleteObject(hbwindow);
    DeleteDC(hwindowCompatibleDC);
    ReleaseDC(hwnd, hwindowDC);
    return src;
}
int main(int argc, char**argv)
{
    setlocale(LC_ALL, "Russian");

    //меняем размер консоли
    HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD crd = { 47, 20 };
    SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
    SetConsoleWindowInfo(out_handle, true, &src);
    SetConsoleScreenBufferSize(out_handle, crd);

    //меняем цвет текста
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    std::cout << "              Авто рыбалка TESO\n";
    std::cout << "Для работы Вам необходим аддон VotansFisherman.\n" << "В аддоне нужно включить отображение крюка.\n" << "рыбачить нужно от первого лица\n";
    std::cout << "===============================================\n";
    Sleep(5000);
    std::string file_name = "fishing_node.png";// файл который ищем
    std::string file_screen = "Screenshot.png";//файл скриншота

    Mat image = imread(file_name, IMREAD_COLOR);
    Mat screenShot;
    Mat res;
    Sleep(5000);

    while (true) { 
        HWND hwnd = GetDesktopWindow();    // захват
        Mat src = captureScreenMat(hwnd);
        imwrite("Screenshot.png", src);   // сохранение
        screenShot = imread(file_screen, IMREAD_COLOR);
        matchTemplate(screenShot, image, res, TM_CCOEFF_NORMED);

        double minVal, maxVal, thresholdMax = 0.7, thresholdMin=0.5;
        Point minLoc, maxLoc;
        minMaxLoc(res, &minVal, &maxVal, &minLoc, &maxLoc);   

        if (maxVal > thresholdMin && minVal< thresholdMax) {
            keybd_event('E', 0, 0, 0);//НАЖАТИЕ
            keybd_event('E', 0, KEYEVENTF_KEYUP, 0);//ОТПУСКАНИЕ
            std::cout << "Рыба поймана\n";
            Sleep(1000);
            std::cout << "Начинаю рыбалку\n";          
            keybd_event('E', 0, 0, 0);
            keybd_event('E', 0, KEYEVENTF_KEYUP, 0);
         }
        else {
            std::cout << "Ловим рыбу\n";
        }
        waitKey(100);
    }
    return 0;
}
