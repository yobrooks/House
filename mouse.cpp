#ifndef MOUSE
#define MOUSE

#include "openGl.h"
#include "prototypes.h"
#include "globals.h"
#include <iostream>

//determine which area was clicked to see which axis to rotate about
int rotateArea(int x, int y)
{
	if((x > y && x < (WINDOW_WIDTH/2) && y < (WINDOW_HEIGHT/2)) ||
	     ((-1)*x + WINDOW_WIDTH > y && y < (WINDOW_HEIGHT/2) && x > (WINDOW_WIDTH/2)))
	{
		return 3;
	}
	
	else if(x < y && x < (WINDOW_WIDTH/2)  && y > (WINDOW_HEIGHT/2))
	{
		return 2;
	}

	else if(x > (WINDOW_WIDTH/2) && y > (WINDOW_HEIGHT/2) && ((-1)*x + WINDOW_WIDTH) < y)
	{
		return 1;
	}	
}

//increase SPIN by DELTA SPIN
//make sure SPIN does pass 360
void spinDisplay()
{
	X_SPIN = X_SPIN + X_DELTA;
	Y_SPIN = Y_SPIN + Y_DELTA;
	Z_SPIN = Z_SPIN + Z_DELTA;

	if(X_SPIN > 360)
	{
		X_SPIN = X_SPIN -360;
	}

	if (Y_SPIN > 360)
	{
		Y_SPIN = Y_SPIN -360;
	}

	if (Z_SPIN > 360)
	{
		Z_SPIN = Z_SPIN -360;
	}	

	glutPostRedisplay();
}

//function for the mouse commands
void mouse(int button, int state, int x, int y)
{
	y = WINDOW_HEIGHT - y; //change from mouse coordinates to screen coordinates
	int typeSpin = 0;
	//if left mouse is clicked, determine which axis to rotate about, 
	//increment DELTA SPIN for that axis
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		typeSpin = rotateArea(x, y);
		if(typeSpin == 1)
			X_DELTA = X_DELTA + 0.005;
		else if(typeSpin == 2)
			Y_DELTA = Y_DELTA + 0.005;
		else if(typeSpin == 3)
			Z_DELTA = Z_DELTA + 0.005;
	}

	//same for right button, just decreasing DELTA SPIN
	else if(button == GLUT_RIGHT_BUTTON && state ==GLUT_DOWN)
	{
		typeSpin = rotateArea(x, y);
		if(typeSpin == 1)
			X_DELTA = X_DELTA - 0.005;
		else if(typeSpin == 2)
			Y_DELTA = Y_DELTA - 0.005;
		else if(typeSpin == 3)
			Z_DELTA = Z_DELTA - 0.005;
	}

	glutIdleFunc(spinDisplay);	
}

#endif
