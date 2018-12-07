#  Yasmine Brooks      #
#  Dr.Pounds           #
#  December 6, 2018    #
#  Project 3 Makefile  #

CXX = g++
LDLIBS =  -lglut -lGL -lGLU -lm
HEADERS = openGl.h structs.h globals.h constants.h prototypes.h
OBJS = myInit.o buildHouse.o views.o menuOptionFuncs.o menu.o text.o keyboard.o mouse.o display.o  

debug ?= n
ifeq ($(debug), y)
    CFLAGS += -g -DDEBUG
else
    CFLAGS += -O2 
endif


all: threeD tags 

threeD : main.o $(OBJS) 
	$(CXX) $(CFLAGS) -o threeD main.o $(OBJS) $(LDLIBS)

main.o : main.cpp $(HEADERS)
	$(CXX) $(CFLAGS) main.cpp -c

myInit.o : myInit.cpp $(HEADERS)
	$(CXX) $(CFLAGS) myInit.cpp -c

buildHouse.o : buildHouse.cpp $(HEADERS)
	$(CXX) $(CFLAGS) buildHouse.cpp -c

views.o : views.cpp $(HEADERS)
	$(CXX) $(CFLAGS) views.cpp -c

menuOptionFuncs.o : menuOptionFuncs.cpp $(HEADERS)
	$(CXX) $(CFLAGS) menuOptionFuncs.cpp -c

menu.o : menu.cpp $(HEADERS)
	$(CXX) $(CFLAGS) menu.cpp -c

text.o : text.cpp $(HEADERS)
	$(CXX) $(CFLAGS) text.cpp -c

keyboard.o : keyboard.cpp $(HEADERS)
	$(CXX) $(CFLAGS) keyboard.cpp -c

mouse.o: mouse.cpp $(HEADERS)
	$(CXX) $(CFLAGS) mouse.cpp -c

display.o : display.cpp $(HEADERS)
	$(CXX) $(CFLAGS) display.cpp -c

clean:
	rm *.o

pristine:
	rm *.o
	touch *

tags:
	ctags *.h *.cpp
