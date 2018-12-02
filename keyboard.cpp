#ifndef KEYBOARD
#define KEYBOARD

#include <iostream>
#include "openGl.h"
#include "prototypes.h"

void specialKeyboard(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_PAGE_DOWN : std::cout << "move further" << std::endl;
					  break;
		case GLUT_KEY_PAGE_UP : std::cout << "move closer" << std::endl;
					 break;
	}
}

void normalKeyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'q' : exit(0);
		case 's' : std::cout << "stop animation" << std::endl;
			   break;
		case 'r' : std::cout << "return to original position adn size" << std::endl;
			   break;
		case 'R' : std::cout << "return to original position, size, and reset camera" << std:: endl;	
			   break;
	}
}

#endif
