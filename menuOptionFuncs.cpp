#ifndef MENU_OPTIONS
#define MENU_OPTIONS

#include "opengl.h"
#include "structs.h"

void defineColors(base *shape)
{
	shape[0].myColor.red = 0.0;
	shape[0].myColor.green = 0.5;
	shape[0].myColor.blue = 0.0;

	shape[1].myColor.red = 0.0;
        shape[1].myColor.green = 0.5;
        shape[1].myColor.blue = 0.0;

	shape[2].myColor.red = 0.0;
        shape[2].myColor.green = 0.0;
        shape[2].myColor.blue = 1.0;

	shape[3].myColor.red = 0.0;
        shape[3].myColor.green = 0.0;
        shape[3].myColor.blue = 1.0;

	shape[4].myColor.red = 1.0;
        shape[4].myColor.green = 0.0;
        shape[4].myColor.blue = 1.0;

	shape[5].myColor.red = 1.0;
        shape[5].myColor.green = 0.0;
        shape[5].myColor.blue = 1.0;
	
}

void drawFilledInHouse(base *shape)
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	
	glPushMatrix();

	for(int i=0; i<6; i++)
	{
		glColor3f(shape[i].myColor.red, shape[i].myColor.green, shape[i].myColor.blue);
		glBegin(GL_POLYGON);

		for (j=0; j<4; j++)
        	{
        	    glVertex3f(shape[i].vert[j].x,shape[i].vert[j].y, shape[i].vert[j].z);
		}
        	
       		 glEnd();	
	}
	
	glPopMatrix();
}


void drawAxes()
{
	glPointSize(1.0);
   glBegin(GL_LINES);
     glVertex3i(0,length,0);
     glVertex3i(0,-length,0);
   glEnd();
   glBegin(GL_LINES);
     glVertex3i(length,0,0);
     glVertex3i(-length,0,0);
   glEnd();
   glBegin(GL_LINES);
     glVertex3i(0,0,length);
     glVertex3i(0,0,-length);
   glEnd();
}
}
#endif
