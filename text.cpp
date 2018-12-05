#ifndef TEXT
#define TEXT

#include "openGl.h"


void drawStringRaster(float x, float y, float z, void *font, const char *text)
{
	const char *c;
	glRasterPos3f(x, y, z);
	for(c=string; *c!='\0'; c++)
	{
		glutBitmapCharacter(font, *c);
	}
	
}

void drawStringWindow(int x, int y, void *font, const char *text)
{
	const char *c;
        glWindowPos2i(x, y);
        for(c=string; *c!='\0'; c++)
        {
                glutBitmapCharacter(font, *c);
        }

}

void processTextToScreenRaster(float x, float y, float z, const char *textFormat)
{
        char charString [15];
        sprintf(charString, textFormat, null);
        glColor3f(1.0, 1.0, 1.0);
        drawStringRaster(x, y, z, GLUT_BITMAP_TIMES_ROMAN_10, charString);

}

void processTextToScreenWindow(int x, int y, const char *textFormat)
{
	char charString [15];
	sprintf(charString, textFormat, null);
	glColor3f(1.0, 1.0, 1.0);
	drawStringWindow(x, y, GLUT_BITMAP_TIMES_ROMAN_10, charString);	
}

#endif
