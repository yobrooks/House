#ifndef STRUCTS
#define STRUCTS

#include <vector>

struct Vertex {
	float x;
	float y;
	float z;
	float w;
}; //declare variable here


struct color{
        float red;
        float green;
        float blue;
};

struct base{
	Vertex vert [4];
	color myColor;
};

struct roof{
	Vertex vert [3];
	color myColor;
};
#endif
