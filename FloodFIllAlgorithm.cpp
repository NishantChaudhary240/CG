#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void ffill(int x, int y, int fill, int old)
{
    if ((getpixel(x, y) != old) && (getpixel(x, y) != fill))
    {
        delay(1);
        putpixel(x, y, fill);
        ffill(x + 1, y, fill, old);
        ffill(x - 1, y, fill, old);
        ffill(x, y + 1, fill, old);
        ffill(x, y - 1, fill, old);
    }
}
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(10, 60, 60, 10);
    ffill(11, 11, MAGENTA, WHITE);
    getch();
    getch();
    getch();
    closegraph();
}