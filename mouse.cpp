#ifndef MOUSE
#define MOUSE

#include "openGl.h"
#include "prototypes.h"
#include "globals.h"
//#include "constants.h"
#include <iostream>

int rotateArea(int x, int y)
{
	if(x >= 0 && x <=(WINDOW_WIDTH/2) && y >= 0 && y <= (WINDOW_HEIGHT/2))
	{
		return 3;
	}
	
	else if(x > 0 && x < (WINDOW_WIDTH/2) && y > 0 && y < WINDOW_HEIGHT)
	{
		return 2;
	}

	else if(x > (WINDOW_WIDTH/2) && x < WINDOW_WIDTH && y > 0 && y < WINDOW_HEIGHT)
	{
		return 1;
	}	
}

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

void animateHouse()
{

}

void mouse(int button, int state, int x, int y)
{
	y = WINDOW_HEIGHT - y;
	int typeSpin = 0;
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		typeSpin = rotateArea(x, y);
		if(typeSpin == 1)
			X_DELTA += 0.8;
		else if(typeSpin == 2)
			Y_DELTA += 0.8;
		else if(typeSpin == 3)
			Z_DELTA+= 0.8;
		//std::cout << X_SPIN << Y_SPIN << Z_SPIN << std::endl;
	}

	/*else if(button == GLUT_RIGHT_BUTTON && state ==GLUT_DOWN)
	{
		typeSpin = rotateArea(x, y);
		if(typeSpin == 1)
			X_SPIN --;
		else if(typeSpin == 2)
			Y_SPIN --;
		else if(typeSpin == 3)
			Z_SPIN --;
		glutIdleFunc(spinDisplay);
	}*/

	glutIdleFunc(spinDisplay);	
}

#endif
