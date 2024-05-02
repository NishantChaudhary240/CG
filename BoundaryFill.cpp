#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void bfill(int x, int y, int fill, int border)
{
    if ((getpixel(x, y) != border) && (getpixel(x, y) != fill))
    {
        delay(2);
        putpixel(x, y, fill);
        bfill(x + 1, y, fill, border);
        bfill(x, y + 1, fill, border);
        bfill(x - 1, y, fill, border);
        bfill(x, y - 1, fill, border);
    }
}
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(10, 50, 50, 10);
    bfill(11, 11, 10, WHITE);
    getch();
    closegraph();
}