#ifndef TEXT
#define TEXT

#include "openGl.h"
#include <stdio.h>
#include <string.h>
#include "globals.h"
#include <iostream>


void drawString(float x, float y, void *font, const char* string ){
    glColor3f(1.0, 1.0, 1.0);
    const char* c;
    glRasterPos2i( x, y );
    for(c=(char*)string; *c!='\0'; c++)
        glutBitmapCharacter(font, *c);
}

void viewText(std::string view)
{

    char cString[(int)view.length() +1];
    strcpy(cString, view.c_str());

    //set up to draw 2D in 3D
    glDisable(GL_TEXTURE_2D);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0.0, WINDOW_WIDTH, 0.0, WINDOW_HEIGHT);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    //draw the text
    drawString(WINDOW_WIDTH*(0.75), WINDOW_HEIGHT-50,
               GLUT_BITMAP_HELVETICA_18, cString);
    
    //reverse your changes 
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
}

//decide which view string to draw
void decideViewText()
{
	if(TYPE_VIEW == 1)
                viewText("Perspective");
        if(TYPE_VIEW == 2)
                viewText("Orthographic");
        if(TYPE_VIEW == 4)
                viewText("Custom");
	
}

//draw the hello world sign using 3D stroke font
void drawSign()
{
	char sign [] = "HelloWorld!";
	int charLen; void *font = GLUT_STROKE_ROMAN;

	
	glColor3f(1.0, 1.0, 1.0);

        glTranslatef(0.5, 1.0, 2.3);
        glRotatef(90.0, 0.0, 0.0, 1.0);
        glRotatef(90.0, 1.0, 0.0, 0.0); 
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glRotatef(-10.0, 0.0, 1.0, 0.0);
        glScalef(0.002, 0.002, 0.002);
        charLen = (int) strlen(sign);
        for(int i = 0; i < charLen; i++)
        {
              glutStrokeCharacter(font, sign[i]);
        }
}

#endif
