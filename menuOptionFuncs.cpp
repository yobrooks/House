#ifndef MENU_OPTIONS
#define MENU_OPTIONS

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include <stdio.h>

void defineColors(base *shape, roof *trishape)
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
	
	trishape[0].myColor.red = 0.5;
	trishape[0].myColor.green = 0.5;
	trishape[0].myColor.blue = 0.5;

	
        trishape[1].myColor.red = 0.5;
        trishape[1].myColor.green = 0.5;
        trishape[1].myColor.blue = 0.5;


        trishape[2].myColor.red = 0.5;
        trishape[2].myColor.green = 1.0;
        trishape[2].myColor.blue = 1.0;


        trishape[3].myColor.red = 0.5;
        trishape[3].myColor.green = 1.0;
        trishape[3].myColor.blue = 1.0;

}

void drawFilledInHouse(base *shape, roof *trishape)
{

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	
	glPushMatrix();

	for(int i=0; i<6; i++)
	{
		glColor3f(shape[i].myColor.red, shape[i].myColor.green, shape[i].myColor.blue);
		glBegin(GL_POLYGON);

		for (int j=0; j<4; j++)
        	{
        	    glVertex3f(shape[i].vert[j].x,shape[i].vert[j].y, shape[i].vert[j].z);
		}
        	
       		 glEnd();	
	}

	for(int i = 0; i < 4; i++)
	{
		glColor3f(trishape[i].myColor.red, trishape[i].myColor.green, trishape[i].myColor.blue);
                glBegin(GL_TRIANGLES);

                for (int j=0; j<3; j++)
                {
                    glVertex3f(trishape[i].vert[j].x, trishape[i].vert[j].y, trishape[i].vert[j].z);
                }

                 glEnd();

	}
	
	glPopMatrix();
}


void drawAxes(float length)
{
	glPointSize(1.0);
 //	glColor3f(1.0, 1.0, 1.0);
	
	glPushMatrix();

	glColor3f(1.0, 0.0, 0.0);
  	glBegin(GL_LINES); //x axis
     		glVertex3f(length, 0.0, 0.0);
     		glVertex3f(-length, 0.0, 0.0);
   	glEnd();

	glColor3f(0.0, 1.0, 0.0);
   	glBegin(GL_LINES); //y axis
   	  	glVertex3f(0.0, length, 0.0);
     	  	glVertex3f(0.0, -length, 0.0);
   	glEnd();

	glColor3f(0.0, 0.0, 1.0);
   	glBegin(GL_LINES); //z axis
     		glVertex3i(0.0, 0.0, length);
	        glVertex3i(0.0, 0.0, -length);
        glEnd();

	char charString[20];
	sprintf(charString, "X-Axis", 0);
	drawStringRaster(-length, 0.0, -1.0, GLUT_BITMAP_TIMES_ROMAN_10, charString);
	glPopMatrix();
}

#endif
