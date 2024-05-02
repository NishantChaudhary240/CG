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
    cout << " ##### 2D_Translation of rectangle ##### " << endl;
    {
        int x1 = 10, y1 = 150, x2 = 200, y2 = 250;
        int tx, ty;
        cout << "Rectangle before translation is: \n"<< endl;
        setcolor(3);
        rectangle(x1, y1, x2, y2);
        cout << "Enter the translation vector tx and ty: " << endl;
        cin >> tx >> ty;
        setcolor(4);
        cout << "Rectangle after translation is : " << endl;
        rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
        getch();
    }
    closegraph();
    return 0;
}