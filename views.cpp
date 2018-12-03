#ifndef VIEWS
#define VIEWS

#include "openGl.h"


void viewPerspective()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective();
}

void viewOrtho()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho();
}

void viewCustom()
{
	//get code from test 3 
}

void findView()
{

}
