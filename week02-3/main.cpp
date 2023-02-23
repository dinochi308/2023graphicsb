#include <GL/glut.h>
void display()
{
    glColor3f(56/255.0, 182/255.0, 255/255.0);
    glBegin(GL_POLYGON);

    glVertex2f( (110-100)/100.0, -(14-100)/100.0);
    glVertex2f( (154-100)/100.0, -(64-100)/100.0);
    glVertex2f( (173-100)/100.0, -(49-100)/100.0);
    glEnd();
    glColor3f(92/255.0, 225/255.0, 230/255.0);
    glBegin(GL_POLYGON);
    glVertex2f( (99-100)/100.0, -(10-100)/100.0);
    glVertex2f( (60-100)/100.0, -(67-100)/100.0);
    glVertex2f( (148-100)/100.0, -(65-100)/100.0);
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
