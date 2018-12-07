#ifndef KEYBOARD
#define KEYBOARD

#include <iostream>
#include "openGl.h"
#include "prototypes.h"
#include "globals.h"

//return the house to original position, size and reset camera and view
void returnToStandard()
{
	X_DELTA = 0;
	Y_DELTA = 0;
	Z_DELTA = 0;
	X_SPIN = 0;
	Y_SPIN = 0;
	Z_SPIN = 0;
	CAMERA_DELTA = 0;
	TYPE_VIEW = 1;
}

//return house to original position
void reset()
{
	X_SPIN = 0;
	Y_SPIN = 0;
	Z_SPIN = 0;
	X_DELTA = 0;
	Y_DELTA = 0;
	Z_DELTA = 0;
}

//stop the animaton
void stopAnimation()
{
	X_DELTA = 0;
	Y_DELTA = 0;
	Z_DELTA = 0;
}

//process special keyboard input
void specialKeyboard(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_PAGE_DOWN : CAMERA_DELTA ++; //increment camera zoom if PG UP pressed
					  break;
		case GLUT_KEY_PAGE_UP : CAMERA_DELTA --; //decrement camera zoom if PG DOWN pressed
					 break;
	}

	glutPostRedisplay();
}

//process normal keyboard input
void normalKeyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'q' : exit(0); //quit program
		case 's' : stopAnimation(); 
			   break;
		case 'r' : reset();
			   break;
		case 'R' : returnToStandard();
			   break;
	}
}

#endif
