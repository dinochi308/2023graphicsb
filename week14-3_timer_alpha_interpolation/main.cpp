#include <GL/glut.h>
float angle=0, oldAngle=0, newAngle=0; ///step02-1�ŧi�ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t) ///step01-1 �A��timer()�禡,�������ʧ@
{
    if(t<100) glutTimerFunc(50, timer, t+1);
    float alpha = t/100.0;
    angle = newAngle*alpha + (1-alpha) * oldAngle;
    glutPostRedisplay(); ///���e�e��
}
void motion(int x, int y)
{
    angle = x;
    glutPostRedisplay();
}
void mouse(int button, int state,int x, int y)
{
    if(state==GLUT_DOWN) oldAngle = x; ///step02-1���U�h
    if(state==GLUT_UP) newAngle = x; ///step02-1��}��
    glutPostRedisplay(); ///step02-1���e�e��
}
void keyboard(unsigned char key, int x, int y)
{
    glutTimerFunc(0, timer, 0);
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    ///glutTimerFunc(2000, timer, 0);

    glutMainLoop();
}