#ifndef KEYBOARD
#define KEYBOARD

#include <iostream>
#include "openGl.h"
#include "prototypes.h"
#include "globals.h"

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

void reset()
{
	X_SPIN = 0;
	Y_SPIN = 0;
	Z_SPIN = 0;
	X_DELTA = 0;
	Y_DELTA = 0;
	Z_DELTA = 0;
//	CAMERA_DELTA = 0;
}

void stopAnimation()
{
	X_DELTA = 0;
	Y_DELTA = 0;
	Z_DELTA = 0;
}

void specialKeyboard(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_PAGE_DOWN : CAMERA_DELTA ++;
					  break;
		case GLUT_KEY_PAGE_UP : CAMERA_DELTA --;
					 break;
	}
}

void normalKeyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'q' : exit(0);
		case 's' : stopAnimation();
			   break;
		case 'r' : reset();
			   break;
		case 'R' : returnToStandard();
			   break;
	}
}

#endif
