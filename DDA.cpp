#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <process.h>
void main()
{
    float i, x1, x2, y1, y2, dx, dy, x, y, step, xinr, yinr;
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    cout << "Enter the values of start point(x1, y1): \n";
    cin >> x1 >> y1;
    cout << "Enter the values of end point (x2, y2) : \n";
    cin >> x2 >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    if (dx == 0 && dy == 0)
    {
        putpixel(x1, y1, 4);
        getch();
        exit(0);
    }
    if (abs(dx) >= abs(dy))
        step = abs(dx);
    else
        step = abs(dy);
    xinr = dx / step;
    yinr = dy / step;
    x = x1;
    y = y1;

    for (i = 1; i <= step; i++)
    {
        putpixel(x, y, 4);
        x = x + xinr;
        y = y + yinr;
        delay(10);
    }
    getch();
    closegraph();
}
/* Hint: Starting point: 0 , 100
Ending point: 300, 200 */