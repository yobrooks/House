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
	glRotatef(Z_SPIN, 0.0, 0.0, 1.0);
	glRotatef(X_SPIN, 1.0, 0.0, 0.0);
	glRotatef(Y_SPIN, 0.0, 1.0, 0.0);
}

void display(void)
{
	
	base hbase[6];
	roof hroof[4];
	
	
	defineBaseHouse(&hbase[0]);
	defineRoofHouse(&hroof[0]);
	defineColors(&hbase[0], &hroof[0]);
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);


	findView();

	processTextToScreen(400, 400, 1.0, "Test");

	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();

	if(IS_WIREFRAME == true){
		
		drawBaseHouse(&hbase[0], &hroof[0]);
	}

	else{
		drawFilledInHouse(&hbase[0], &hroof[0]);
	}

	glPopMatrix();

	if(AXES_DRAWN == true)
	{
		drawAxes(10.0);
	}

	glFlush();	
}

#endif
