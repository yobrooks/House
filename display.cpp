#ifndef DISPLAY
#define DISPLAY

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"


void display(void)
{
	//draw viewport window 
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	

	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	
}

#endif
