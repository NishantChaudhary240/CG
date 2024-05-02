#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
void plotpoints(int cx, int cy, int x, int y)
{
    putpixel(cx + x, cy + y, 14);
    putpixel(cx - x, cy + y, 14);
    putpixel(cx + x, cy - y, 14);
    putpixel(cx - x, cy - y, 14);
    delay(100);
}
void main()
{
    int x = 0, y;
    int cx, cy, rx, ry;
    int gd = DETECT, gm;
    long rx2, ry2, trx2, try2, p = 0, px, py;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the center coordinates(cx,cy): \n");
    scanf("%d %d", &cx, &cy);
    printf("Enter x-axis radius : ");
    scanf("%d", &rx);
    printf("Enter y-axis radius : ");
    scanf("%d", &ry);
    rx2 = (long)rx * rx;
    ry2 = (long)ry * ry;
    trx2 = 2 * rx2;
    try2 = 2 * ry2;
    y = ry;
    px = 0;
    py = trx2 * y;
    p = (long)((ry2 - (rx2 * ry) + (0.25 * rx2)) + 0.5);
    // cleardevice();
    putpixel(cx, cy, 15);
    while (px < py)
    {
        plotpoints(cx, cy, x, y);
        x++;
        px += try2;
        if (p < 0)
            p = p + ry2 + px;
        else
        {
            y--;
            py -= trx2;
            p = p + ry2 + px - py;
        }
    }
    py = trx2 * y;
    px = try2 * x;
    p = (long)((ry2 * (x + 0.5) * (x + 0.5) + rx2 * (y - 1) * (y - 1) - rx2 * ry2) + 0.5);
    while (y >= 0)
    {
        plotpoints(cx, cy, x, y);
        y--;
        py -= trx2;
        if (p > 0)
            p = p + rx2 - py;
        else
        {
            x++;
            px += try2;
            p = p + rx2 - py + px;
        }
    }
    getch();
}