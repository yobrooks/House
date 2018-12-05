#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"

void myInit(void);
void defineBaseHouse(struct base*);
void defineRoofHouse(struct roof*);
void drawBaseHouse(struct base*, struct roof*);
void processViewMenu(int );
void processDisplayMenu(int );
void processMainMenu(int );
void createMenu(void);
void defineColors(struct base*, struct roof*);
void drawFilledInHouse(struct base*, struct roof*);
void drawStringRaster(float , float , float , void *font , const char *text);
void drawStringWindow(int , int , void* , const char *text );
void processTextToScreenRaster(float , float, float , const char *textFormat );
void processTextToScreenWindow(int , int , const char *textFormat );
void drawAxes(float );
void animateHouse();
void spinDisplay();
int rotateArea(int x, int y);
void findView();
void viewOrtho();
void viewPerspective();
void viewCustom();
void mouse(int , int ,int , int );
void specialKeyboard(int ,int ,int );
void normalKeyboard(unsigned char , int , int );
void reshape(int , int );
void display(void);

#endif

