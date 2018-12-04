#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"

void myInit(void);
void defineBaseHouse(struct base*);
void drawBaseHouse(struct base*);
void processViewMenu(int );
void processDisplayMenu(int );
void processMainMenu(int );
void createMenu(void);
void defineColors(struct base*);
void drawFilledInHouse(struct base*);
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

