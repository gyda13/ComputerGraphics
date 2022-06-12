
#include<windows.h>
#include<GL/glut.h>


float xmove=0;
float ymove=0;

void movement(int button, int x, int y)
{
	switch (button)
	{
		//to move car in all directions
	case GLUT_KEY_LEFT: xmove += 0.5; break;
	case GLUT_KEY_RIGHT: xmove -= 0.5; break;
	case GLUT_KEY_UP: ymove += 0.5; break;
	case GLUT_KEY_DOWN: ymove -= 0.5; break;
	}
	
	glutPostRedisplay();
}


float red = 1.0f, blue = 1.0f, green = 1.0f;


void changeColor(unsigned char key, int x, int y)
{
	//click 'r' to change car color to red
	if (key == 'r') {
		red = 1.0;
		green = 0.0;
		blue = 0.0;
	}
	//click 'b' to change car color to blue
	if (key == 'b') {
		red = 0.0;
		green = 0.0;
		blue = 1.0;
	}
	//click 'g' to change car color to green
	if (key == 'g') {
		red = 0.0;
		green = 1.0;
		blue = 0.0;
	}

}




GLfloat angle = 0;
GLfloat y = 0;
GLfloat y2 = 0;
void draw(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	

	glLoadIdentity();
	gluLookAt(0, 0, -500, 0, 0, 0, 0, 1, 0);

	//backgroun
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.5, 0.8); 
	glVertex2f(-500.0, 500.0);
	glColor3f(0.4, 0.7, 0.8);
	glVertex2f(-500, -500);
	glColor3f(0,0.5,0.2); 
	glVertex2f(500, -500);
	glColor3f(0,0,0); 
	glVertex2f(500, 500);
	glEnd();
	

	//start building1
	glPushMatrix();
	glTranslated(-20, -50, 0);
	glScaled(0.5, 3, 0);
	glRotated(20, 0, 1, 0);
	glColor3f(0.3, 0.3, 0.3);
	glutSolidCube(100);
	glPopMatrix();
	//end bulding
	
	//start building2
	glPushMatrix();
	glTranslated(100, -50, 0);
	glScaled(0.5, 3, 0);
	glRotated(20, 0, 1, 0);
	glColor3f(0.3, 0.3, 0.3);
	glutSolidCube(100);
	//start bulding windows
	glPushMatrix();
	glTranslated(10, 30, 0);
	glColor3ub(100, 180, 240);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 30, 0);
	glColor3ub(100, 180, 240);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(10, 5, 0);
	glColor3ub(100, 180, 240);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 5, 0);
	glColor3ub(100, 180, 240);
	glutSolidCube(20);
	glPopMatrix();
	//end bulding windows
	glPopMatrix();
	//end bulding
	
	//start building3
	glPushMatrix();
	glTranslated(40, -50, 0);
	glScaled(0.5, 3.5, 0);
	glRotated(20, 0, 1, 0);
	glColor3f(0.5,0.5,0.5);
	glutSolidCube(100);
	glPopMatrix();
	//end bulding


	//start building4
	glPushMatrix();


	glTranslated(0, -50, 0);
	glPushMatrix();
	glScaled(0.5, 2.5, 0);
	glRotated(20, 0, 1, 0);
	glColor3f(0.5, 0.04, 1.0);
	glutSolidCube(100);
	glPopMatrix();
	

	//start bulding windows

	glPushMatrix();
	glTranslated(5, 100, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-20, 100, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 70, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-20, 70, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();


	glPushMatrix();
	glTranslated(5,40, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-20, 40, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();
	glPushMatrix();

	glTranslated(5, 10, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-20, 10, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(15);
	glPopMatrix();

	
	//end bulding windows

	glPopMatrix();
	//end bulding


	//start building5
	glPushMatrix();
	glTranslated(50,-30, 0);
	glScaled(0.7,1.8, 0);
	glRotated(20, 0, 1, 0);
	glColor3ub(112, 153, 202);
	glutSolidCube(100);

	//start bulding windows
	glPushMatrix();
	glTranslated(10, 30, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 30, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(10, 5, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 5, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();


	glPushMatrix();
	glTranslated(10, -25, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, -25, 0);
	glColor3f(1, 1, 0);
	glutSolidCube(20);
	glPopMatrix();
	//end bulding windows

	glPopMatrix();
	//end bulding


	//start donut shope
	glPushMatrix();

	glTranslated(-80, -70, 0);
	glScaled(1.0, 0.8, 0);
	glRotated(8, 0, 1, 0);
	glColor3f(1, 1, 1);
	glutSolidCube(100);


	glPushMatrix();
	glTranslated(-10,-10, 0);
	glScaled(2, 2, 0);
	glRotated(5, 0, 1, 0);
	glColor3f(1, 0.5, 0);
	glutSolidCube(30);

	glPushMatrix();
	glTranslated(0, -10, 0);
	glScaled(0.8, 1.5, 0);
	glRotated(5, 0, 1, 0);
	glColor3ub(200, 100, 100);
	glutSolidCube(20);
	
	glPopMatrix();

	glPopMatrix();


	glPushMatrix();
	glTranslated(-10,65, 0);
	glRotated(10, 0, 1, 0);
	glColor3ub(200, 100, 100);
	glutSolidTorus(12, 17, 3, 100);
	glPopMatrix();

	glPopMatrix();

	//end

	
	//street
	glPushMatrix();
	glTranslated(-70, -100, 0);
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.3, 0.3);
	glVertex2i(-500, 0);
	glVertex2i(500, 0);
	glVertex2i(500, -200);
	glVertex2i(-500,-200);
	glEnd();
	glTranslated(-70, -20, 0);
	glLineWidth(5.0);
	glEnable(GL_LINE_STIPPLE);
	glColor3f(1, 1, 1);
	glLineStipple(20, 0XAAAA);
	glBegin(GL_LINES);
	glVertex2i(-500, 0);
	glVertex2i(500, 0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glTranslated(-70, -60, 0);
	glLineWidth(5.0);
	glEnable(GL_LINE_STIPPLE);
	glColor3f(1, 1, 1);
	glLineStipple(20, 0XAAAA);
	glBegin(GL_LINES);
	glVertex2i(-500, 0);
	glVertex2i(500, 0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);


	//car
	glPushMatrix();
	glTranslatef(xmove, ymove, 0);
	glColor3f(red, green, blue);
	glTranslated(400, 40, 0);
	glutSolidCube(40);
	glBegin(GL_POLYGON);
	glVertex2i(-45, 0);
	glVertex2i(45, 0);
	glVertex2i(45, -33);
	glVertex2i(-45, -33);
	glEnd();
	//wheels
	glColor3f(0, 0, 0);
	glTranslated(-30, -33, 0);
	glutSolidSphere(10, 30, 20);
	glColor3f(0, 0,0);
	glTranslated(60, -1, 0);
	glutSolidSphere(10, 30, 20);
	glPopMatrix();


	glPopMatrix();




	//Clouds
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	GLfloat amb[] = { 0.25f , 0.20725f , 0.20725f , 0.922f };
	glLightfv(GL_LIGHT0, GL_AMBIENT, amb);

	GLfloat diff[] = { 1.0f , 0.829f ,0.829f , 0.922f };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diff);

	GLfloat spec[] = { 0.296648f , 0.296648f , 0.296648f , 0.922f };
	glLightfv(GL_LIGHT0, GL_SPECULAR, spec);

	GLfloat pos[] = { 200,250,-1,0 };
	glLightfv(GL_LIGHT0, GL_POSITION, pos);

	
	
	glPushMatrix();
	glColor3f(1, 1, 1);   // sphere 1
	glTranslated(-50, 120, 0);
	//translate on x
	glTranslated(-70, 30, 0);
	glTranslated(y, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere 2
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  3
	glTranslated(10, 15, 0);
	glutSolidSphere(10, 20, 70);

	glColor3f(1, 1, 1);   //sphere 4
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  5
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  6
	glTranslated(70, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  7
	glTranslated(-20, 0, 0);
	glutSolidSphere(10, 20, 70);

	glColor3f(1, 1, 1);   //sphere  8
	glTranslated(-40, -20, 0);
	glutSolidSphere(10, 20, 70);
	
	glPopMatrix();
	y += 0.01;

	glPushMatrix();
	glColor3f(1, 1, 1);   // sphere 1
	glTranslated(-70, 120, 0);
	//translate on x
	glTranslated(y2, 10, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere 2
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  3
	glTranslated(10, 15, 0);
	glutSolidSphere(10, 20, 70);

	glColor3f(1, 1, 1);   //sphere 4
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  5
	glTranslated(-20, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  6
	glTranslated(70, 0, 0);
	glutSolidSphere(15, 20, 70);

	glColor3f(1, 1, 1);   // sphere  7
	glTranslated(-20, 0, 0);
	glutSolidSphere(10, 20, 70);

	glColor3f(1, 1, 1);   //sphere  8
	glTranslated(-40, -20, 0);
	glutSolidSphere(10, 20, 70);
	glDisable(GL_LIGHTING);
	glPopMatrix();
	y2 += 0.01;


	

	//sun
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	GLfloat s[] = { 1.0 , 1.0, 1.0 , 1.0 };
	glLightfv(GL_LIGHT0, GL_SPECULAR, s);
	GLfloat p[] = { 0.1,0.1,-1,0};
	glLightfv(GL_LIGHT0, GL_POSITION, p);
	GLfloat e[] = { 0.5,0.5,-1,0 };
	glLightfv(GL_LIGHT0, GL_EMISSION, e);
	glPushMatrix();
	glTranslated(150, 150, 0);
	glColor3f(1, 1, 0);
	glutSolidSphere(20, 30, 100);
	glPopMatrix();
	glPushMatrix();
	glTranslated(150, 150, 0);
	//rotate on z
	glRotated(angle, 0, 0, 1);
	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2i(0, 30);
	glVertex2i(8, 21);
	glVertex2i(-8, 21);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(22, 21);
	glVertex2f(10, 20);
	glVertex2f(20, 10);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(-22, 21);
	glVertex2f(-10, 20);
	glVertex2f(-20, 10);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(28, 0);
	glVertex2f(21, 8);
	glVertex2f(21, -8);
	glEnd();


	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(-28, 0);
	glVertex2f(-21, 8);
	glVertex2f(-21, -8);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(19, -21);
	glVertex2f(20, -10);
	glVertex2f(8, -20);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(-19, -21);
	glVertex2f(-20, -10);
	glVertex2f(-8, -20);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, -30);
	glVertex2i(-8, -21);
	glVertex2i(8, -21);
	glEnd();

	glPopMatrix();
	angle += 0.05;
	
	glutSwapBuffers();
	
}


int main(int argc, char** argv) {

	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Computer graphics Project");
	glClearColor(0,130, 1, 0.5);
	glutDisplayFunc(draw);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1, 30, -100);
	glMatrixMode(GL_MODELVIEW);
	glutIdleFunc(draw);

	glutSpecialFunc(movement);
	
	glutKeyboardFunc(changeColor);

	glutMainLoop();

	return 0;

}
