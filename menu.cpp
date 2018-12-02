//modeled after http://www.lighthouse3d.com/tutorials/glut-tutorial/popup-menus/

#ifndef MENU
#define MENU

#define ORTHO 1
#define PERSPECTIVE 2
#define CUSTOM 3
#define STANDARD 4
#define FILLED 5
#define WIREFRAME 6
#define DISPLAY_AXES 7
#define HELLO_WORLD 8
#define EXIT 9

#include "openGl.h"
#include <iostream>
void processViewMenu(int vchoice)
{
	switch (vchoice) 
	{
		case ORTHO : 
				std::cout << "Orthographic View" << std::endl; break;

		case PERSPECTIVE : 
					 std::cout << "Perspective View" << std::endl; break;

		case CUSTOM : 
				 std::cout << "Custom View" << std::endl; break;
	}	
				
}

void processDisplayMenu(int dchoice)
{
	switch (dchoice)
	{
		case FILLED : 
				 std::cout << "Filled Shape" << std::endl; break;

		case WIREFRAME : 
				 std::cout << "WireFrame Shape" << std::endl; break;
	
		case DISPLAY_AXES:
				 std::cout << "Axes" << std::endl; break;

		case HELLO_WORLD: 
				 std::cout << "Hello world sign" << std::endl; break;
	}
}

void processMainMenu(int mchoice)
{
	switch (mchoice)
	{
		case STANDARD : 
				 std::cout << "return to standard" << std::endl; break;	

		case EXIT : 
				exit(0);
	}
}


void createMenu(void)
{
	int mainMenu, displayMenu, viewMenu;

	viewMenu  = glutCreateMenu(processViewMenu);
	glutAddMenuEntry("Orthographic View", ORTHO);
	glutAddMenuEntry("Perspective View", PERSPECTIVE);
	glutAddMenuEntry("Custom View" , CUSTOM);

	displayMenu = glutCreateMenu(processDisplayMenu);
	glutAddMenuEntry("Filled In Shape", FILLED);
	glutAddMenuEntry("Wire Frame Shape", WIREFRAME);
	glutAddMenuEntry("Show Axes", DISPLAY_AXES);
	glutAddMenuEntry("Hello World Sign", HELLO_WORLD);

	mainMenu = glutCreateMenu(processMainMenu);
	glutAddSubMenu("Display Options", displayMenu);
	glutAddMenuEntry("Return to Standard", STANDARD);
	glutAddSubMenu("View Options", viewMenu);
	glutAddMenuEntry("Exit Program", EXIT);

	glutAttachMenu(GLUT_MIDDLE_BUTTON); //change to middle
	glutDetachMenu(GLUT_MIDDLE_BUTTON); //change to middle
}

#endif

