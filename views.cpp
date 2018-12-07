#ifndef VIEWS
#define VIEWS

#include "openGl.h"
#include "prototypes.h"
#include "globals.h"
#include <iostream>
#include <math.h>

//sets up perspective view
void viewPerspective()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(67.4, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt (CAMERA_DELTA + 5.0, CAMERA_DELTA + 7.0, (CAMERA_DELTA/3) + 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

}

//sets up orthographic view
void viewOrtho()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
        gluLookAt (CAMERA_DELTA + 5.0, CAMERA_DELTA+7.0, (CAMERA_DELTA*3) + 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

}

//sets up custom view
void viewCustom()
{
	//series of prompts asked to get parameter input from user on command line
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
	glFrustum(l, r, b, t, n, f); //sets up view based on parameters with frustum
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
        gluLookAt (CAMERA_DELTA +5.0, CAMERA_DELTA+7.0, (CAMERA_DELTA/3)+5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	TYPE_VIEW = 4; //sets the type of view variable to 4 so it won't
			// keep prompting the user for input
}

//find the view that you are in when changed
void findView()
{

	if(TYPE_VIEW == 1)
	{
		viewPerspective(); 
	}
	else if(TYPE_VIEW == 2)
	{
		viewOrtho();
	}
	else if(TYPE_VIEW == 3)
	{
		viewCustom();
	}

}

#endif
