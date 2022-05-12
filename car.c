#include<stdio.h>
#include<GL/glut.h>
float x;
void drawcar()
{
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(20.0,20.0);
	glVertex2f(20.0,35.0);
	glVertex2f(60.0,35.0);
	glVertex2f(60.0,20.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glPointSize(3.0);
	glBegin(GL_POLYGON);
	glVertex2f(30.0,35.0);
	glVertex2f(35.0,45.0);
	glVertex2f(45.0,45.0);
	glVertex2f(45.0,35.0);
	glEnd();
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(30,20,0);
	glutSolidSphere(5.0,50.0,50.5);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(50,20,0);
	glutSolidSphere(5.0,50.0,50.5);
	glPopMatrix();
	glEnd();
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslatef(x,0.0,0.0);
drawcar();
glPopMatrix();
glPushMatrix();
glTranslatef(x,50.0,0.0);
glScalef(0.5,0.5,1);
drawcar();
glPopMatrix();
glFlush();
}
void timer(int e)
{
x--;
glutPostRedisplay();
glutTimerFunc(100,timer,0);
} 	
int main(int argc,char **argv)
{
	printf(" ");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("car");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-100.0,100.0,-100.0,100.0,-20,+20);
	glutDisplayFunc(display);
	timer(0);
	glutMainLoop();
	
}
