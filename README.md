To compile in C on linux or C compiler application:
create a directory with Hackmain.c assets.c and FPToolkit.c 
open terminal
cd the directory
type:
    cc Hackmain.c -lm -lX11
    ./a.out

Libraries:
-lm = link math library
-lX11 = link X11 library (FPToolkit.c)

controls for now are wasd to move and m for map
