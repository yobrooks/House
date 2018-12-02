#ifndef RESHAPE
#define RESHAPE

#include "openGl.h"

void reshape(int width, int height)
{
	glViewport(0,0,(GLsizei) width, (GLsizei)height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

#endif
