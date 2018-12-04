#ifndef DISPLAY
#define DISPLAY

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
//#include "constants.h"
#include <vector>
#include <iostream>


void animateHouse()
{
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef(X_SPIN, 1.0, 0.0, 0.0);
	glRotatef(Y_SPIN, 0.0, 1.0, 0.0);
	glRotatef(Z_SPIN, 0.0, 0.0, 1.0);
}

void display(void)
{
	//draw viewport window 
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
	
	base hbase[6];
	
	
	
	defineBaseHouse(&hbase[0]);
	defineColors(&hbase[0]);
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	gluLookAt (6.0, 5.0, 3.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	
	findView();

	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	animateHouse();

	if(IS_WIREFRAME == true){
		drawBaseHouse(&hbase[0]);
	}

	else{
		drawFilledInHouse(&hbase[0]);
	}

	glPopMatrix();

	if(AXES_DRAWN == true)
	{
		drawAxes(10.0);
	}

	glFlush();	
}

#endif
