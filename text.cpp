#ifndef TEXT
#define TEXT

#include "openGl.h"
#include <stdio.h>
#include <string.h>
#include "globals.h"

void drawString(int x, int y, void *font, const char *text) {
	const char *c;
	glRasterPos2i(x, y);
	for(c=text; *c!='\0'; c++) {
	        glutBitmapCharacter(font, *c);
	}
}

void processTextToScreen(int x, int y, float number, const char *textFormat) {
	char charString[20];
	sprintf(charString, textFormat, number);
    	glColor3ub(0, 255, 128);
	drawString(x, y, GLUT_BITMAP_TIMES_ROMAN_24, charString);
}


void drawSign()
{
	char sign [] = "Hello World!";
	int charLen; void *font = GLUT_STROKE_ROMAN;

	if(IS_WIREFRAME == true)
	{
		glColor3f(1.0, 1.0, 1.0);
	} else 
		glColor3f(0.0, 0.0, 0.0);

	glPushMatrix();
        glTranslatef(0.0, 2.0, -0.8);
        glRotatef(90.0, 0.0, 0.0, 1.0);
  //      glRotatef(90.0, 1.0, 0.0, 0.0);
        glScalef(0.003, 0.003, 0.003);
        //charLen = (int) strlen(y);
        for(int i = 0; i < charLen; i++)
        {
         //       glutStrokeCharacter(font, y[i]);
        }

	glPopMatrix();
		
}

#endif
