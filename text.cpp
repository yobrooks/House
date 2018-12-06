#ifndef TEXT
#define TEXT

#include "openGl.h"
#include <stdio.h>
#include <string.h>
#include "globals.h"

void drawViewText(char view[])
{

	int viewLen; void *font = GLUT_STROKE_ROMAN;

	glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(1.0, 1.0, 1.0);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glRotatef(90.0, 1.0, 0.0, 0.0);
        glScalef(0.005, 0.005, 0.005);
        viewLen = (int) strlen(view);
        for(int i = 0; i < viewLen; i++)
        {
              glutStrokeCharacter(font, view[i]);
        }
	glPopMatrix();
}


void drawSign()
{
	char sign [] = "HelloWorld!";
	int charLen; void *font = GLUT_STROKE_ROMAN;

	
	glColor3f(1.0, 1.0, 1.0);

        glTranslatef(0.5, 1.0, 2.3);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glRotatef(90.0, 1.0, 0.0, 0.0);
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glRotatef(-10.0, 0.0, 0.0, 0.0);
        glScalef(0.002, 0.002, 0.002);
        charLen = (int) strlen(sign);
        for(int i = 0; i < charLen; i++)
        {
              glutStrokeCharacter(font, sign[i]);
        }
}

#endif
