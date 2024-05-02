#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <iostream.h>
int main(void)
{
    /* request auto detection */
    int gd = DETECT, gm, errorcode;
    /* initialize graphics and local variables */
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int x1, y1, x2, y2;
    cout << "______ This is BLA for m<1_______";
    cout << "\n Enter starting point (X1,Y1) \n";
    cin >> x1 >> y1;
    cout << "Enter ending point (x2,y2) \n";
    cin >> x2 >> y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;
    int e = (2 * dy) - dx;
    for (int i = 0; i <= dx; i++)
    {
        putpixel(x, y, 14);
        delay(20);
        while (e >= 0)
        {
            y = y + 1;
            e = e - (2 * dx);
        }
        x = x + 1;
        e = e + (2 * dy);
    }
    /* clean up */
    getch();
    closegraph();
    return 0;
}