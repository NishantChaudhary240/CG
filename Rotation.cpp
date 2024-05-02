#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
int main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    cout << " ##### 2D_Rotation of line ##### " << endl;
    {
        int x1 = 0, y1 = 0, x2 = 250, y2 = 100, th;
        double a;
        double x1n, y1n, x2n, y2n;
        cout << "Line before rotation is: \n"<< endl;
        setcolor(5);
        line(x1, y1, x2, y2);
        cout << "Enter the angle of rotation: ";
        cin >> th;
        a = (th * 3.14) / 180;
        x1n = x1 * cos(a) - y1 * sin(a);
        y1n = x1 * sin(a) + y1 * cos(a);
        x2n = x2 * cos(a) - y2 * sin(a);
        y2n = x2 * sin(a) + y2 * cos(a);
        cout << "Line after rotation about origin is: ";
        setcolor(14);
        line(x1n, y1n, x2n, y2n);
        getch();
        getch();
    }
    closegraph();
    return 0;
}