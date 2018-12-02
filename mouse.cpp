#ifndef MOUSE
#define MOUSE

#include "openGl.h"
#include "globals.h"
//#include "constants.h"
#include <iostream>

void mouse(int button, int state, int x, int y)
{
	y = WINDOW_HEIGHT - y;
	
/*	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) //must change to middle
	{
		std::cout << "MENU" << std::endl;
	}*/
}

#endif
