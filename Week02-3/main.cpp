#include <GL/glut.h>
void display()
{
    glColor3f(56/255.0, 182/255.0, 255/255.0);
    glBegin(GL_POLYGON);
    glVertex2f( (106-100)/100.0, -(9-100)/100.0);
    glVertex2f( (149-100)/100.0, -(62-100)/100.0);
    glVertex2f( (168-100)/100.0, -(47-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (170-100)/100.0, -(52-100)/100.0);
    glVertex2f( (152-100)/100.0, -(67-100)/100.0);
    glVertex2f( (172-100)/100.0, -(128-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (148-100)/100.0, -(73-100)/100.0);
    glVertex2f( (171-100)/100.0, -(140-100)/100.0);
    glVertex2f( (105-100)/100.0, -(151-100)/100.0);
    glEnd();

    glColor3f(92/255.0, 225/255.0, 230/255.0);
    glBegin(GL_POLYGON);
    glVertex2f( (96-100)/100.0, -(5-100)/100.0);
    glVertex2f( (57-100)/100.0, -(65-100)/100.0);
    glVertex2f( (143-100)/100.0, -(63-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (87-100)/100.0, -(9-100)/100.0);
    glVertex2f( (51-100)/100.0, -(65-100)/100.0);
    glVertex2f( (26-100)/100.0, -(50-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (48-100)/100.0, -(70-100)/100.0);
    glVertex2f( (23-100)/100.0, -(54-100)/100.0);
    glVertex2f( (24-100)/100.0, -(143-100)/100.0);
    glEnd();

    glColor3f(95/255.0, 220/255.0, 177/255.0);
    glBegin(GL_POLYGON);
    glVertex2f( (145-100)/100.0, -(69-100)/100.0);
    glVertex2f( (56-100)/100.0, -(71-100)/100.0);
    glVertex2f( (100-100)/100.0, -(150-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (52-100)/100.0, -(74-100)/100.0);
    glVertex2f( (95-100)/100.0, -(152-100)/100.0);
    glVertex2f( (26-100)/100.0, -(143-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (97-100)/100.0, -(157-100)/100.0);
    glVertex2f( (97-100)/100.0, -(188-100)/100.0);
    glVertex2f( (35-100)/100.0, -(150-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f( (102-100)/100.0, -(157-100)/100.0);
    glVertex2f( (102-100)/100.0, -(187-100)/100.0);
    glVertex2f( (163-100)/100.0, -(147-100)/100.0);
    glEnd();



	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("Week02-1");
	glutDisplayFunc(display);
	glutMainLoop();
}
