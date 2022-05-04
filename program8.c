#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(220,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(240,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(260,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(280,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
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
	glOrtho(0.0,500.0,0.0,500.0,-20,+20);
	glutDisplayFunc(display);
	glutMainLoop();
	
}
