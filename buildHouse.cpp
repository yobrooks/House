#ifndef BUILDHOUSE
#define BUILDHOUSE

#include "openGl.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"
#include <vector>
#include <iostream>


//*code modeled after Dr. Pounds perspective class example*//
//define the vertices of the house
void defineBaseHouse(base *box)
{
	
	//define the top box
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

	//define the bottom side
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

	//define the front side
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

	//define the back side
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

	//define left and right sides
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

//define the vertices of the roof of the house
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

//draw the house
void drawBaseHouse(base *myBase, roof *myRoof)
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glPushMatrix();
	
	//transformations to make the house rotate
	glRotatef(X_SPIN, 1.0, 0.0, 0.0);
        glRotatef(Y_SPIN, 0.0, 1.0, 0.0);
        glRotatef(Z_SPIN, 0.0, 0.0, 1.0);
 
	glColor3f(1.0, 1.0, 1.0);
	//draw the base house
	for(int i=0; i <6; i++)
	{
		glBegin(GL_POLYGON);
		for(int j = 0; j<4; j++)
		{
			glVertex3f(myBase[i].vert[j].x, myBase[i].vert[j].y, myBase[i].vert[j].z);
		}
		glEnd();
	}

	//draw the roof house
	for(int i = 0; i < 4; i++)
	{
		glBegin(GL_TRIANGLES);
		for(int j = 0; j < 3; j++)
		{
			glVertex3f(myRoof[i].vert[j].x, myRoof[i].vert[j].y, myRoof[i].vert[j].z);
		}
		glEnd();
	}
 
	//draw the house sign if toggled
	if(HOUSE_SIGN == true)
	{
		drawSign();
	}

	glPopMatrix();

	//decide the current  view and draw it
	decideViewText();
	

}
#endif
