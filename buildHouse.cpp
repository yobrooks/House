#ifndef BUILDHOUSE
#define BUILDHOUSE

#include "openGl.h"
#include "structs.h"
#include <vector>
#include <iostream>

//void defineBaseHouse(std::vector <base> myBase)
void defineBaseHouse(base *box)
{
	//reserve the space for myBase when created 
	//myBase[0].vert.reserve(4);
	std::cout << "ABOUT TO DEFINE VERTS" << std::endl;
	
	//define the front box
	//ACTUALLY DREW BOTTOM
	box[0].vert[0].x = -1.0;
	box[0].vert[0].y = -1.0;
	box[0].vert[0].z = 0.0;
	box[0].vert[0].w = 1.0;
	box[0].vert[1].x = -1.0;
        box[0].vert[1].y = 1.0;
        box[0].vert[1].z = 0.0;
        box[0].vert[1].w = 1.0;
	box[0].vert[2].x = 1.0;
        box[0].vert[2].y = 1.0;
        box[0].vert[2].z = 0.0;
        box[0].vert[2].w = 1.0;
	box[0].vert[3].x = 1.0;
        box[0].vert[3].y = -1.0;
        box[0].vert[3].z = 0.0;
        box[0].vert[3].w = 1.0;

	//define the back side
	//ACTUALLY DREW TOP
	box[1].vert[0].x = -1.0;
	box[1].vert[0].y = -1.0;
	box[1].vert[0].z = -1.0;
	box[1].vert[0].w = 1.0;
	box[1].vert[1].x = -1.0;
        box[1].vert[1].y = 1.0;
        box[1].vert[1].z = -1.0;
        box[1].vert[1].w = 1.0;
	box[1].vert[2].x = 1.0;
        box[1].vert[2].y = 1.0;
        box[1].vert[2].z = -1.0;
        box[1].vert[2].w = 1.0;
	box[1].vert[3].x = 1.0;
        box[1].vert[3].y = -1.0;
        box[1].vert[3].z = -1.0;
        box[1].vert[3].w = 1.0;

	//define the right side
	//ACTUALLY DREW FRONT
	box[2].vert[0].x = 1.0;
        box[2].vert[0].y = -1.0;
        box[2].vert[0].z = 0.0;
        box[2].vert[0].w = 1.0;
        box[2].vert[1].x = 1.0;
        box[2].vert[1].y = 1.0;
        box[2].vert[1].z = 0.0;
        box[2].vert[1].w = 1.0;
        box[2].vert[2].x = 1.0;
        box[2].vert[2].y = 1.0;
        box[2].vert[2].z = -1.0;
        box[2].vert[2].w = 1.0;
        box[2].vert[3].x = 1.0;
        box[2].vert[3].y = -1.0;
        box[2].vert[3].z = -1.0;
        box[2].vert[3].w = 1.0;

	//define the left side
	//ACTUALLY DREW BACK
	box[3].vert[0].x = -1.0;
        box[3].vert[0].y = -1.0;
        box[3].vert[0].z = -1.0;
        box[3].vert[0].w = 1.0;
        box[3].vert[1].x = -1.0;
        box[3].vert[1].y = 1.0;
        box[3].vert[1].z = -1.0;
        box[3].vert[1].w = 1.0;
        box[3].vert[2].x = -1.0;
        box[3].vert[2].y = 1.0;
        box[3].vert[2].z = 0.0;
        box[3].vert[2].w = 1.0;
        box[3].vert[3].x = -1.0;
        box[3].vert[3].y = -1.0;
        box[3].vert[3].z = 0.0;
        box[3].vert[3].w = 1.0;

	//define the top face
	box[4].vert[0].x = -1.0;
        box[4].vert[0].y = 1.0;
        box[4].vert[0].z = 0.0;
        box[4].vert[0].w = 1.0;
        box[4].vert[1].x = -1.0;
        box[4].vert[1].y = 1.0;
        box[4].vert[1].z = -1.0;
        box[4].vert[1].w = 1.0;
        box[4].vert[2].x = 1.0;
        box[4].vert[2].y = 1.0;
        box[4].vert[2].z = -1.0;
        box[4].vert[2].w = 1.0;
        box[4].vert[3].x = 1.0;
        box[4].vert[3].y = 1.0;
        box[4].vert[3].z = 0.0;
        box[4].vert[3].w = 1.0;
	
	//define the bottom face
	box[5].vert[0].x = -1.0;
        box[5].vert[0].y = -1.0;
        box[5].vert[0].z = -1.0;
        box[5].vert[0].w = 1.0;
        box[5].vert[1].x = -1.0;
        box[5].vert[1].y = -1.0;
        box[5].vert[1].z = 0.0;
        box[5].vert[1].w = 1.0;
        box[5].vert[2].x = 1.0;
        box[5].vert[2].y = -1.0;
        box[5].vert[2].z = 0.0;
        box[5].vert[2].w = 1.0;
        box[5].vert[3].x = 1.0;
        box[5].vert[3].y = -1.0;
        box[5].vert[3].z = -1.0;
        box[5].vert[3].w = 1.0;	


	//START TRIANGLES HERE
/*	box[6].vert[0].x = -1.0;
        box[6].vert[0].y = -1.0;
        box[6].vert[0].z = -1.0;
        box[6].vert[0].w = 1.0;
        box[6].vert[1].x = -1.0;
        box[6].vert[1].y = 1.0;
        box[6].vert[1].z = -1.0;
        box[6].vert[1].w = 1.0;
        box[6].vert[2].x = 1.0;
        box[6].vert[2].y = 1.0;
        box[6].vert[2].z = 1.0;
        box[6].vert[2].w = 1.0;
        box[6].vert[3].x = 1.0;
        box[6].vert[3].y = -1.0;
        box[6].vert[3].z = 1.0;
        box[6].vert[3].w = 1.0;*/
}

void defineRoofHouse(base *top)
{
/*	top[0].vert[0]
	top[0].vert[0]
	top[0].vert[0]
	top[0].vert[0]
	top[0].vert[1]
	top[0].vert[1]
	top[0].vert[1]
	top[0].vert[1]
	top[0].vert[2]
	top[0].vert[2]
	top[0].vert[2]
	top[0].vert[2]
*/

}
void drawBaseHouse(base *myBase)
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	

	glPushMatrix();
	for(int i=0; i <6; i++)
	{
		glBegin(GL_POLYGON);
		for(int j = 0; j<4; j++)
		{
			glVertex3f(myBase[i].vert[j].x, myBase[i].vert[j].y, myBase[i].vert[j].z);
		}
		glEnd();
	}
	
	glPopMatrix();
}
#endif
