#ifndef VIEWS
#define VIEWS

#include "openGl.h"
#include <iostream>
#include <math.h>

void viewPerspective()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(67.4, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}


void viewOrtho()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}
//take array as input 
void viewCustom()
{
/*	float l, r, b, t, n, f;
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

	float projMatrix [16];
	*(projMatrix + 0) = (2 * fabs(n))/(r-l);
	*(projMatrix + 1) = 0;
	*(projMatrix + 2) = 0;
	*(projMatrix + 3) = 0;
	*(projMatrix + 4) = 0;
	*(projMatrix + 5) = (2 * fabs(n))/(t-b);
	*(projMatrix + 6) = 0;
	*(projMatrix + 7) = 0;
	*(projMatrix + 8) = (r+l)/(r-l);
	*(projMatrix + 9) = (t+b)/(t-b);
	*(projMatrix + 10) = (fabs(n) + fabs(f))/(fabs(n) - fabs(f));
	*(projMatrix + 11) = -1;
	*(projMatrix + 12) = 0;
	*(projMatrix + 13) = 0;
	*(projMatrix + 14) = (2 * fabs(n) * fabs(f))/(fabs(n) - fabs(f));
	*(projMatrix + 15) = 0;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLoadMatrixf(projMatrix);
	glMatrixMode(GL_MODELVIEW);*/
}

//take array as input 
void findView()
{
	int viewChoice;
	switch(viewChoice)
	{
		case '1' : viewPerspective(); break;
		
		case '2' : viewOrtho(); break;

		case '3' : viewCustom(); break;	
	}
}

#endif
