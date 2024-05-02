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
    cout << " \n\n\n\n\n\n\n\n ##### 2D_Scaling of a rectangle ##### " << endl;
    {
        int x1 = 0, y1 = 0, x2 = 60, y2 = 80;
        float sx, sy;
        cout << "Rectangle before scaling: " << endl;
        setcolor(3);
        rectangle(x1, y1, x2, y2);
        cout << "Enter the scaling factor: " << endl;
        cin >> sx >> sy;
        cout << "New rectangle is after scaling: " << endl;
        setcolor(14);
        rectangle(x1 * sx, y1 * sy, x2 * sx, y2 * sy);
        getch();
        getch();
    }
    closegraph();
    return 0;
}