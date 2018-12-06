#ifndef GLOBALS
#define GLOBALS

#include "structs.h"

extern const int WINDOW_HEIGHT;
extern const int WINDOW_WIDTH;
extern const int VIEWPORT_MIN;
extern const int VIEWPORT_MAX;
extern int TYPE_VIEW; 
extern bool IS_WIREFRAME;
extern bool AXES_DRAWN;
extern float X_SPIN;
extern float Y_SPIN;
extern float Z_SPIN;
extern float X_DELTA;
extern float Y_DELTA;
extern float Z_DELTA; 
extern bool INITIALIZED;
extern int CAMERA_DELTA;
#endif
// use extern here -- then we include this header in each code piece that
// // needs access to the variables.   Declare the actual variables in exactly
// // one location. In the case of constants, make a specific header where you define 
// // them and include it before main.c
