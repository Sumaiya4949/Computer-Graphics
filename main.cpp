#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(10.0);

	// Draw a couple of points

	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(100, 350);
		glVertex2i(300, 350);

		glVertex2i(100, 350);
		glVertex2i(300, 350);

		glVertex2i(300, 350);
		glVertex2i(300, 200);


		glVertex2i(100, 200);
		glVertex2i(300, 200);


	glEnd();

		glColor3f(0.0, 1.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(100, 200);
		glVertex2i(300, 200);

		glVertex2i(100, 200);
		glVertex2i(100, 50);

		glVertex2i(100, 50);
		glVertex2i(300, 50);


		glVertex2i(300, 50);
		glVertex2i(300, 200);


	glEnd();

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);

	glVertex2i(100, 350);
    glVertex2i(300, 350);

	glVertex2i(100, 350);
	glVertex2i(140, 380);

	glVertex2i(300, 350);
	glVertex2i(330, 380);

	glVertex2i(140, 380);
	glVertex2i(330, 380);


	glEnd();

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_QUADS);

	glVertex2i(300, 350);
	glVertex2i(330, 380);
	glVertex2i(330, 50);
	glVertex2i(300, 50);

	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);

    glVertex2i(100, 50);
	glVertex2i(80 , 30);

	glVertex2i(330, 50);
	glVertex2i(350, 30);

	glVertex2i(100, 50);
	glVertex2i(330, 50);

	glVertex2i(80 , 30);
	glVertex2i(350, 30);

	glEnd();

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_QUADS);

	glVertex2i(180, 350);
	glVertex2i(220, 350);

	glVertex2i(220, 350);
	glVertex2i(180, 50);

	glVertex2i(220, 50);
	glVertex2i(220, 350);

	glVertex2i(180, 50);
	glVertex2i(220, 50);

	glEnd();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);

	glVertex2i(250, 320);
	glVertex2i(280, 320);

	glVertex2i(280, 320);
	glVertex2i(250, 270);

	glVertex2i(250, 270);
	glVertex2i(280, 270);

	glVertex2i(280, 320);
	glVertex2i(280, 270);

	glEnd();

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);

	glVertex2i(280, 100);
	glVertex2i(280, 150);

	glVertex2i(250, 150);
	glVertex2i(250, 100);

	glVertex2i(250, 100);
	glVertex2i(280, 150);

	glVertex2i(280, 100);
    glVertex2i(250, 150);
glEnd();

glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);

	glVertex2i(120, 150);
	glVertex2i(150, 150);

	glVertex2i(120, 100);
	glVertex2i(150, 100);

	glVertex2i(150, 150);
	glVertex2i(120, 100);

	glVertex2i(120, 150);
    glVertex2i(150, 100);

glEnd();

glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);

	glVertex2i(150, 320);
	glVertex2i(150, 270);

	glVertex2i(150, 270);
	glVertex2i(120, 270);

	glVertex2i(120, 270);
	glVertex2i(120, 320);

	glVertex2i(150, 320);
	glVertex2i(120, 320);
	glEnd();

	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(500, 500);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
