#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void circlemidpoint(int, int, int);
void drawcircle(int, int, int, int);
int main()
{
    int xc, yc, r;
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    cout << "Enter center coordinate of circle:\n";
    cin >> xc >> yc;
    cout << "Enter radius of circle:\n";
    cin >> r;
    circlemidpoint(xc, yc, r);
    getch();
    closegraph();
    return 0;
}
void circlemidpoint(int xc, int yc, int r)
{
    int x = 0, y = r;
    int p = 5 / 4 - r;
    while (x < y)
    {
        drawcircle(xc, yc, x, y);
        x++;
        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            y = y - 1;
            p = p + 2 * (x - y) + 1;
        }
        drawcircle(xc, yc, x, y);
        delay(150);
    }
}
void drawcircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, 4);
    putpixel(xc - x, yc + y, 1);
    putpixel(xc + x, yc - y, 14);
    putpixel(xc - x, yc - y, BLUE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, RED);
    putpixel(xc + y, yc - x, GREEN);
    putpixel(xc - y, yc - x, RED);
}