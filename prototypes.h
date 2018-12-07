#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

//function prototypes
void myInit(void);
void defineBaseHouse(struct base*);
void defineRoofHouse(struct roof*);
void drawBaseHouse(struct base*, struct roof*);
void processViewMenu(int );
void processDisplayMenu(int );
void processMainMenu(int );
void createMenu(void);
void returnToStandard();
void stopAnimation();
void reset();
void drawString(float , float , void *, const char* );
void viewText(std::string );
void defineColors(struct base*, struct roof*);
void drawFilledInHouse(struct base*, struct roof*);
void drawSign();
void decideViewText();
void processTextToSreen(int , int , float , const char *);
void drawAxes(float );
void spinDisplay();
int rotateArea(int x, int y);
void findView();
void viewOrtho();
void viewPerspective();
void viewCustom();
void mouse(int , int ,int , int );
void specialKeyboard(int ,int ,int );
void normalKeyboard(unsigned char , int , int );
void display(void);

#endif

