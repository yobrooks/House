#ifndef DISPLAY
#define DISPLAY

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include <vector>
#include <iostream>

void display(void)
{
	//draw viewport window 
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
	
	base hbase[6];
	
	
	
	defineBaseHouse(&hbase[0]);
	
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt (6.0, 5.0, 3.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	drawBaseHouse(&hbase[0]);

	std::cout << "HOUSE DRAWN" << std::endl;
	glFlush();	
}

#endif
