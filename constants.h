#ifndef CONSTANTS
#define CONSTANTS

#include "structs.h"

//supposed to be just constants but ended up initializing all global variables here
const int WINDOW_HEIGHT = 500;
const int WINDOW_WIDTH = 500;
const int VIEWPORT_MIN = 100;
const int VIEWPORT_MAX = WINDOW_HEIGHT - 100;
bool IS_WIREFRAME = true;
bool AXES_DRAWN = false;
int TYPE_VIEW = 1; //1 is projection, 2 is ortho, 3 is custom
float X_SPIN = 0.0;
float Y_SPIN = 0.0;
float Z_SPIN = 0.0;
float X_DELTA = 0.0;
float Y_DELTA = 0.0;
float Z_DELTA = 0.0;
bool HOUSE_SIGN = false;
int CAMERA_DELTA = 0;

#endif
