#ifndef TEXT
#define TEXT

#include "openGl.h"
#include <stdio.h>
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


#endif
