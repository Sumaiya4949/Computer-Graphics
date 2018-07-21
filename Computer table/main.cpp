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
	glColor3f(0.0, 0.5, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(150, 350);
		glVertex2i(350, 350);

		glVertex2i(350, 350);
		glVertex2i(330, 250);

		glVertex2i(330, 250);
		glVertex2i(140, 250);


	glEnd();



	glColor3f(0.5, 1.0, 0.5);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(350, 350);
		glVertex2i(360, 340);

		glVertex2i(360, 340);
		glVertex2i(340, 240);

		glVertex2i(340, 240);
		glVertex2i(330, 250);

		glVertex2i(330, 250);
		glVertex2i(350, 350);



	glEnd();

	glColor3f(0.5, 1.0, 0.5);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(140, 250);
		glVertex2i(330, 250);

		glVertex2i(330, 250);
		glVertex2i(340, 240);

		glVertex2i(340, 240);
		glVertex2i(140, 240);

		glVertex2i(140, 240);
		glVertex2i(140, 250);


		glEnd();
	glColor3f(0.0, 0.5, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(360, 340);
		glVertex2i(360, 120);

		glVertex2i(360, 120);
		glVertex2i(340, 100);

		glVertex2i(340, 100);
		glVertex2i(340, 240);

		glVertex2i(340, 240);
		glVertex2i(360, 340);
		glEnd();

		glColor3f(0.0, 0.5, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(150, 240);
		glVertex2i(150, 100);

		glVertex2i(150, 100);
		glVertex2i(140, 100);

		glVertex2i(140, 100);
		glVertex2i(140, 240);

		glVertex2i(140, 240);
		glVertex2i(150, 240);
		glEnd();
		glColor3f(0.5, 1.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(260, 240);
		glVertex2i(340, 240);

		glVertex2i(340, 240);
		glVertex2i(340, 200);

		glVertex2i(340, 200);
		glVertex2i(260, 200);

		glVertex2i(260, 200);
		glVertex2i(260, 240);


		glEnd();
		glColor3f(0.5, 1.0, 0.5);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(260, 200);
		glVertex2i(340, 200);

		glVertex2i(340, 200);
		glVertex2i(340, 100);

		glVertex2i(340, 100);
		glVertex2i(260, 100);

		glVertex2i(260, 100);
		glVertex2i(260, 200);
		glEnd();
		glColor3f(0.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(230, 300);
		glVertex2i(280, 300);

		glVertex2i(280, 300);
		glVertex2i(270, 270);

		glVertex2i(270, 270);
		glVertex2i(220, 270);

		glVertex2i(220, 270);
		glVertex2i(230, 300);
		glEnd();
		glColor3f(0.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(240, 300);
		glVertex2i(270, 300);

		glVertex2i(270, 300);
		glVertex2i(270, 310);

		glVertex2i(270, 310);
		glVertex2i(240, 310);

		glVertex2i(240, 310);
		glVertex2i(240, 300);


		glEnd();
glColor3f(0.0, 1.0, 1.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(190, 400);
		glVertex2i(320, 400);

		glVertex2i(320, 400);
		glVertex2i(320, 310);

		glVertex2i(320, 310);
		glVertex2i(190, 310);

		glVertex2i(190, 310);
		glVertex2i(190, 400);



		glEnd();


	glFlush();


}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
