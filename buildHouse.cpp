#ifndef BUILDHOUSE
#define BUILDHOUSE

#include "openGl.h"
#include "structs.h"
#include "globals.h"
#include <vector>
#include <iostream>

void defineBaseHouse(base *box)
{
	
	//define the front box
	//ACTUALLY DREW TOP
	box[0].vert[0].x = -1.0;
	box[0].vert[0].y = -1.0;
	box[0].vert[0].z = 2.0;
	box[0].vert[0].w = 1.0;
	box[0].vert[1].x = -1.0;
        box[0].vert[1].y = 1.0;
        box[0].vert[1].z = 2.0;
        box[0].vert[1].w = 1.0;
	box[0].vert[2].x = 1.0;
        box[0].vert[2].y = 1.0;
        box[0].vert[2].z = 2.0;
        box[0].vert[2].w = 1.0;
	box[0].vert[3].x = 1.0;
        box[0].vert[3].y = -1.0;
        box[0].vert[3].z = 2.0;
        box[0].vert[3].w = 1.0;

	//define the back side
	//ACTUALLY DREW BOTTOM
	box[1].vert[0].x = -1.0;
	box[1].vert[0].y = -1.0;
	box[1].vert[0].z = 0.0;
	box[1].vert[0].w = 1.0;
	box[1].vert[1].x = -1.0;
        box[1].vert[1].y = 1.0;
        box[1].vert[1].z = 0.0;
        box[1].vert[1].w = 1.0;
	box[1].vert[2].x = 1.0;
        box[1].vert[2].y = 1.0;
        box[1].vert[2].z = 0.0;
        box[1].vert[2].w = 1.0;
	box[1].vert[3].x = 1.0;
        box[1].vert[3].y = -1.0;
        box[1].vert[3].z = 0.0;
        box[1].vert[3].w = 1.0;

	//define the right side
	//ACTUALLY DREW FRONT
	box[2].vert[0].x = 1.0;
        box[2].vert[0].y = -1.0;
        box[2].vert[0].z = 2.0;
        box[2].vert[0].w = 1.0;
        box[2].vert[1].x = 1.0;
        box[2].vert[1].y = 1.0;
        box[2].vert[1].z = 2.0;
        box[2].vert[1].w = 1.0;
        box[2].vert[2].x = 1.0;
        box[2].vert[2].y = 1.0;
        box[2].vert[2].z = 0.0;
        box[2].vert[2].w = 1.0;
        box[2].vert[3].x = 1.0;
        box[2].vert[3].y = -1.0;
        box[2].vert[3].z = 0.0;
        box[2].vert[3].w = 1.0;

	//define the left side
	//ACTUALLY DREW BACK
	box[3].vert[0].x = -1.0;
        box[3].vert[0].y = -1.0;
        box[3].vert[0].z = 0.0;
        box[3].vert[0].w = 1.0;
        box[3].vert[1].x = -1.0;
        box[3].vert[1].y = 1.0;
        box[3].vert[1].z = 0.0;
        box[3].vert[1].w = 1.0;
        box[3].vert[2].x = -1.0;
        box[3].vert[2].y = 1.0;
        box[3].vert[2].z = 2.0;
        box[3].vert[2].w = 1.0;
        box[3].vert[3].x = -1.0;
        box[3].vert[3].y = -1.0;
        box[3].vert[3].z = 2.0;
        box[3].vert[3].w = 1.0;

	//define the top face
	box[4].vert[0].x = -1.0;
        box[4].vert[0].y = 1.0;
        box[4].vert[0].z = 2.0;
        box[4].vert[0].w = 1.0;
        box[4].vert[1].x = -1.0;
        box[4].vert[1].y = 1.0;
        box[4].vert[1].z = 0.0;
        box[4].vert[1].w = 1.0;
        box[4].vert[2].x = 1.0;
        box[4].vert[2].y = 1.0;
        box[4].vert[2].z = 0.0;
        box[4].vert[2].w = 1.0;
        box[4].vert[3].x = 1.0;
        box[4].vert[3].y = 1.0;
        box[4].vert[3].z = 2.0;
        box[4].vert[3].w = 1.0;
	
	box[5].vert[0].x = -1.0;
        box[5].vert[0].y = -1.0;
        box[5].vert[0].z = 0.0;
        box[5].vert[0].w = 1.0;
        box[5].vert[1].x = -1.0;
        box[5].vert[1].y = -1.0;
        box[5].vert[1].z = 2.0;
        box[5].vert[1].w = 1.0;
        box[5].vert[2].x = 1.0;
        box[5].vert[2].y = -1.0;
        box[5].vert[2].z = 2.0;
        box[5].vert[2].w = 1.0;
        box[5].vert[3].x = 1.0;
        box[5].vert[3].y = -1.0;
        box[5].vert[3].z = 0.0;
        box[5].vert[3].w = 1.0;	
}

void defineRoofHouse(roof *top)
{
	top[0].vert[0].x = 0.0;
	top[0].vert[0].y = 0.0;
	top[0].vert[0].z = 3.0;
	top[0].vert[0].w = 1.0;
	top[0].vert[1].x = -1.0;
	top[0].vert[1].y = -1.0;
	top[0].vert[1].z = 2.0;
	top[0].vert[1].w = 1.0;
	top[0].vert[2].x = 1.0;
	top[0].vert[2].y = -1.0;
	top[0].vert[2].z = 2.0;
	top[0].vert[2].w = 1.0;

	top[1].vert[0].x = 0.0;
        top[1].vert[0].y = 0.0;
        top[1].vert[0].z = 3.0;
        top[1].vert[0].w = 1.0;
        top[1].vert[1].x = -1.0;
        top[1].vert[1].y = 1.0;
        top[1].vert[1].z = 2.0;
        top[1].vert[1].w = 1.0;
        top[1].vert[2].x = 1.0;
        top[1].vert[2].y = 1.0;
        top[1].vert[2].z = 2.0;
        top[1].vert[2].w = 1.0;

	top[2].vert[0].x = 0.0;
        top[2].vert[0].y = 0.0;
        top[2].vert[0].z = 3.0;
        top[2].vert[0].w = 1.0;
        top[2].vert[1].x = -1.0;
        top[2].vert[1].y = 1.0;
        top[2].vert[1].z = 2.0;
        top[2].vert[1].w = 1.0;
        top[2].vert[2].x = -1.0;
        top[2].vert[2].y = -1.0;
        top[2].vert[2].z = 2.0;
        top[2].vert[2].w = 1.0;

	top[3].vert[0].x = 0.0;
        top[3].vert[0].y = 0.0;
        top[3].vert[0].z = 3.0;
        top[3].vert[0].w = 1.0;
        top[3].vert[1].x = 1.0;
        top[3].vert[1].y = -1.0;
        top[3].vert[1].z = 2.0;
        top[3].vert[1].w = 1.0;
        top[3].vert[2].x = 1.0;
        top[3].vert[2].y = 1.0;
        top[3].vert[2].z = 2.0;
        top[3].vert[2].w = 1.0;

}
void drawBaseHouse(base *myBase, roof *myRoof)
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	

	glPushMatrix();
	glRotatef(X_SPIN, 1.0, 0.0, 0.0);
        glRotatef(Y_SPIN, 0.0, 1.0, 0.0);
        glRotatef(Z_SPIN, 0.0, 0.0, 1.0);

	for(int i=0; i <6; i++)
	{
		glBegin(GL_POLYGON);
		for(int j = 0; j<4; j++)
		{
			glVertex3f(myBase[i].vert[j].x, myBase[i].vert[j].y, myBase[i].vert[j].z);
		}
		glEnd();
	}

	for(int i = 0; i < 4; i++)
	{
		glBegin(GL_TRIANGLES);
		for(int j = 0; j < 3; j++)
		{
			glVertex3f(myRoof[i].vert[j].x, myRoof[i].vert[j].y, myRoof[i].vert[j].z);
		}
		glEnd();
	}
	
	glPopMatrix();
}
#endif
