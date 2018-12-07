#ifndef DISPLAY
#define DISPLAY

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
#include <vector>
#include <iostream>



void display(void)
{
	
	base hbase[6];
	roof hroof[4];
	
	//define the points and colors
	defineBaseHouse(&hbase[0]);
	defineRoofHouse(&hroof[0]);
	defineColors(&hbase[0], &hroof[0]);


	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);

	
	findView(); //find the view you are in and set it up


	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//drawn in wireframe if toggled
	if(IS_WIREFRAME == true){
		
		drawBaseHouse(&hbase[0], &hroof[0]);
	}

	//draw filled house if toggled
	else{
		drawFilledInHouse(&hbase[0], &hroof[0]);
	}
  

	//draw the axes if toggled
	if(AXES_DRAWN == true)
	{
		drawAxes(10.0);
	}

	glFlush();	


}

#endif
