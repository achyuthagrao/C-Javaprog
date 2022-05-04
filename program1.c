#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glVertex2f(2.0,3.0);
	glVertex2f(5.0,5.0);
	glEnd();
	glFlush();
}	
int main(int argc,char **argv)
{
	printf("hello");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("first program");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,10.0,0.0,10.0);
	glutDisplayFunc(display);
	glutMainLoop();
	
}	
