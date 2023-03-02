#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glBegin(GL_LINE_LOOP);
       glVertex2f(-0.23,0.77);
   glVertex2f(-0.37,0.65);
   glVertex2f(-0.46,0.57);
   glVertex2f(-0.55,0.41);
   glVertex2f(-0.63,0.12);
   glVertex2f(-0.63,-0.05);
   glVertex2f(-0.51,-0.19);
   glVertex2f(-0.36,-0.23);
   glVertex2f(0.05,-0.26);
   glVertex2f(0.15,-0.25);
   glVertex2f(0.35,-0.15);
   glVertex2f(0.45,0.21);
   glVertex2f(0.42,0.35);
   glVertex2f(0.21,0.73);
   glVertex2f(-0.01,0.82);
   glEnd();
     glutSwapBuffers();
}
void mouse(int button,int state, int x, int y)
{
    X = (x-150)/150.0;
    Y = -(y-150)/150.0;
    if(state==GLUT_DOWN) printf("   glVertex2f(%.2f,%.2f);\n", X, Y);
    }

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("10160473");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();

}
