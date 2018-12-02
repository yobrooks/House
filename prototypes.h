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
void mouse(int , int ,int , int );
void reshape(int , int );
void display(void);

#endif

