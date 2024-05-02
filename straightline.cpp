#include <windows.h>
#include <GL/glut.h>
void display()
{
    // glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    // glOrtho(-4, 6, -4, 4, -4, 5);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0, 3);
    glVertex2f(0, -3);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(3, 0);
    glVertex2f(-3, 0);
    glEnd();
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Two lines");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(150, 150);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}