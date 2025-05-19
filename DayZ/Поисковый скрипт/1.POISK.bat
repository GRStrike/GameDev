echo on
MD P:\1.POISK\REZ\data\act
MD P:\1.POISK\REZ\data\briks
MD P:\1.POISK\REZ\data\crete
MD P:\1.POISK\REZ\data\door
MD P:\1.POISK\REZ\data\fbr
MD P:\1.POISK\REZ\data\floor
MD P:\1.POISK\REZ\data\fx
MD P:\1.POISK\REZ\data\glas
MD P:\1.POISK\REZ\data\glass
MD P:\1.POISK\REZ\data\glow
MD P:\1.POISK\REZ\data\grnd
MD P:\1.POISK\REZ\data\item
MD P:\1.POISK\REZ\data\mtl
MD P:\1.POISK\REZ\data\mtl2
MD P:\1.POISK\REZ\data\other
MD P:\1.POISK\REZ\data\penetration
MD P:\1.POISK\REZ\data\pond
MD P:\1.POISK\REZ\data\prop
MD P:\1.POISK\REZ\data\prop2
MD P:\1.POISK\REZ\data\rails
MD P:\1.POISK\REZ\data\roads
MD P:\1.POISK\REZ\data\roof
MD P:\1.POISK\REZ\data\sign
MD P:\1.POISK\REZ\data\ston
MD P:\1.POISK\REZ\data\surfaces
MD P:\1.POISK\REZ\data\tile
MD P:\1.POISK\REZ\data\trees
MD P:\1.POISK\REZ\data\veh
MD P:\1.POISK\REZ\data\wall
MD P:\1.POISK\REZ\data\wind
MD P:\1.POISK\REZ\data\wind2
MD P:\1.POISK\REZ\data\wood
MD P:\1.POISK\REZ\data\wood2
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\act\%%I" COPY "P:\1.POISK\data\act\%%I" p:\1.POISK\REZ\data\act\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\briks\%%I" COPY "P:\1.POISK\data\briks\%%I" p:\1.POISK\REZ\data\briks\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\crete\%%I" COPY "P:\1.POISK\data\crete\%%I" p:\1.POISK\REZ\data\crete\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\door\%%I" COPY "P:\1.POISK\data\door\%%I" p:\1.POISK\REZ\data\door\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\fbr\%%I" COPY "P:\1.POISK\data\fbr\%%I" p:\1.POISK\REZ\data\fbr\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\floor\%%I" COPY "P:\1.POISK\data\floor\%%I" p:\1.POISK\REZ\data\floor\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\fx\%%I" COPY "P:\1.POISK\data\fx\%%I" p:\1.POISK\REZ\data\fx\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\glas\%%I" COPY "P:\1.POISK\data\glas\%%I" p:\1.POISK\REZ\data\glas\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\glass\%%I" COPY "P:\1.POISK\data\glass\%%I" p:\1.POISK\REZ\data\glass\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\glow\%%I" COPY "P:\1.POISK\data\glow\%%I" p:\1.POISK\REZ\data\glow\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\grnd\%%I" COPY "P:\1.POISK\data\grnd\%%I" p:\1.POISK\REZ\data\grnd\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\item\%%I" COPY "P:\1.POISK\data\item\%%I" p:\1.POISK\REZ\data\item\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\mtl\%%I" COPY "P:\1.POISK\data\mtl\%%I" p:\1.POISK\REZ\data\mtl\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\mtl2\%%I" COPY "P:\1.POISK\data\mtl2\%%I" p:\1.POISK\REZ\data\mtl2\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\other\%%I" COPY "P:\1.POISK\data\other\%%I" p:\1.POISK\REZ\data\other\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\penetration\%%I" COPY "P:\1.POISK\data\penetration\%%I" p:\1.POISK\REZ\data\penetration\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\pond\%%I" COPY "P:\1.POISK\data\pond\%%I" p:\1.POISK\REZ\data\pond\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\prop\%%I" COPY "P:\1.POISK\data\prop\%%I" p:\1.POISK\REZ\data\prop\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\prop2\%%I" COPY "P:\1.POISK\data\prop2\%%I" p:\1.POISK\REZ\data\prop2\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\rails\%%I" COPY "P:\1.POISK\data\rails\%%I" p:\1.POISK\REZ\data\rails\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\roads\%%I" COPY "P:\1.POISK\data\roads\%%I" p:\1.POISK\REZ\data\roads\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\roof\%%I" COPY "P:\1.POISK\data\roof\%%I" p:\1.POISK\REZ\data\roof\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\sign\%%I" COPY "P:\1.POISK\data\sign\%%I" p:\1.POISK\REZ\data\sign\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\ston\%%I" COPY "P:\1.POISK\data\ston\%%I" p:\1.POISK\REZ\data\ston\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\surfaces\%%I" COPY "P:\1.POISK\data\surfaces\%%I" p:\1.POISK\REZ\data\surfaces\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\tile\%%I" COPY "P:\1.POISK\data\tile\%%I" p:\1.POISK\REZ\data\tile\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\trees\%%I" COPY "P:\1.POISK\data\trees\%%I" p:\1.POISK\REZ\data\trees\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\veh\%%I" COPY "P:\1.POISK\data\veh\%%I" p:\1.POISK\REZ\data\veh\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\wall\%%I" COPY "P:\1.POISK\data\wall\%%I" p:\1.POISK\REZ\data\wall\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\wind\%%I" COPY "P:\1.POISK\data\wind\%%I" p:\1.POISK\REZ\data\wind\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\wind2\%%I" COPY "P:\1.POISK\data\wind2\%%I" p:\1.POISK\REZ\data\wind2\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\wood\%%I" COPY "P:\1.POISK\data\wood\%%I" p:\1.POISK\REZ\data\wood\
FOR /F "tokens=*" %%I IN (1.List.c) DO IF EXIST "P:\1.POISK\data\wood2\%%I" COPY "P:\1.POISK\data\wood2\%%I" p:\1.POISK\REZ\data\wood2\