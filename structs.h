#ifndef STRUCTS
#define STRUCTS

#include <vector>

//struct for vertices
struct Vertex {
	float x;
	float y;
	float z;
	float w;
}; 

//struct for the color to draw in
struct color{
        float red;
        float green;
        float blue;
};

//struct for the square base of the house
struct base{
	Vertex vert [4];
	color myColor;
};

//struct for the roof of the house
struct roof{
	Vertex vert [3];
	color myColor;
};
#endif
