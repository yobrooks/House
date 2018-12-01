#ifndef GLOBALS
#define GLOBALS

extern const int WINDOW_HEIGHT;
extern const int WINDOW_WIDTH;
extern const int VIEWPORT_MIN;
extern const int VIEWPORT_MAX;

#endif
// use extern here -- then we include this header in each code piece that
// // needs access to the variables.   Declare the actual variables in exactly
// // one location. In the case of constants, make a specific header where you define 
// // them and include it before main.c
