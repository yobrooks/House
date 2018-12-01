#ifndef MYINIT
#define MYINIT

#include "openGl.h"
#include "globals.h"
//#include "constants.h"

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glShadeModel(GL_FLAT);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (float)WINDOW_HEIGHT, 0.0, (float) WINDOW_HEIGHT);
	glMatrixMode(GL_MODELVIEW);
	
}

#endif
