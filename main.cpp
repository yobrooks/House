#ifndef MAIN
#define MAIN
#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
#include "constants.h"

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WINDOW_HEIGHT, WINDOW_WIDTH);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("3D House");
	myInit();
	createMenu();
	glutMouseFunc(mouse);
	glutKeyboardFunc(normalKeyboard);
	glutSpecialFunc(specialKeyboard);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}

#endif
	
