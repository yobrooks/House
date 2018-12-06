#ifndef VIEWS
#define VIEWS

#include "openGl.h"
#include "prototypes.h"
#include "globals.h"
#include <iostream>
#include <math.h>

void viewPerspective()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(67.4, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt (CAMERA_DELTA + 5.0, CAMERA_DELTA + 7.0, (CAMERA_DELTA/3) + 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
//	drawViewText("Perspective");
}


void viewOrtho()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
        gluLookAt (CAMERA_DELTA + 5.0, CAMERA_DELTA+7.0, (CAMERA_DELTA*3) + 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

}
//take array as input 
void viewCustom()
{
	float l, r, b, t, n, f;
	std::cout << "Please enter the left parameter" << std::endl;
	std::cin >> l;
	
	std::cout << "Please enter the right parameter" << std::endl;
        std::cin >> r;

	std::cout << "Please enter the bottom parameter" << std::endl;
        std::cin >> b;

	std::cout << "Please enter the top parameter" << std::endl;
        std::cin >> t;

	std::cout << "Please enter the near parameter" << std::endl;
        std::cin >> n;

	std::cout << "Please enter the far parameter" << std::endl;
        std::cin >> f;


	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(l, r, b, t, n, f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
        gluLookAt (CAMERA_DELTA +5.0, CAMERA_DELTA+7.0, (CAMERA_DELTA/3)+5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	TYPE_VIEW = 4;
}

//take array as input 
void findView()
{

	if(TYPE_VIEW == 1)
	{
		viewPerspective(); 
		drawViewText("Perspective");
	}
	else if(TYPE_VIEW == 2)
	{
		viewOrtho();
		drawViewText("Orthographic"); 
	}
	else if(TYPE_VIEW == 3)
	{
		viewCustom();
		drawViewText("Custom");
	}

}

#endif
