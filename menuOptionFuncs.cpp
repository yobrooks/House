#ifndef MENU_OPTIONS
#define MENU_OPTIONS

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
#include <stdio.h>
#include <string.h>

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

	glRotatef(X_SPIN, 1.0, 0.0, 0.0);
        glRotatef(Y_SPIN, 0.0, 1.0, 0.0);
        glRotatef(Z_SPIN, 0.0, 0.0, 1.0);

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
	int strnglngth;
	char x [] = "X-Axis";
	char y [] = "Y-Axis";
	char z [] = "Z-Axis";

	void *font = GLUT_STROKE_ROMAN;

	glPointSize(1.0);
	
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
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(4.0, 0.0, 0.2);
        glRotatef(90.0, 0.0, 1.0, 1.0);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glScalef(0.003, 0.003, 0.003);
        strnglngth = (int) strlen(x);
        for(int i = 0; i < strnglngth; i++)
        {
                glutStrokeCharacter(font, x[i]);
        }

        glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
        glTranslatef(0.0, 2.0, -0.8);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glRotatef(90.0, 1.0, 0.0, 0.0);
        glScalef(0.003, 0.003, 0.003);
        strnglngth = (int) strlen(y);
        for(int i = 0; i < strnglngth; i++)
        {
                glutStrokeCharacter(font, y[i]);
        }

        glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);
        glPushMatrix();
        glTranslatef(-0.2, 0.2, 4);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glRotatef(90.0, 1.0, 0.0, 0.0);
        glScalef(0.003, 0.003, 0.003);
        strnglngth = (int) strlen(z);
        for(int i = 0; i < strnglngth; i++)
        {
                glutStrokeCharacter(font, z[i]);
        }
        glPopMatrix();
	
}

#endif
