CXX = g++
LDLIBS =  -lglut -lGL -lGLU -lm
HEADERS = openGl.h structs.h globals.h constants.h prototypes.h
OBJS = myInit.o buildHouse.o reshape.o menu.o keyboard.o mouse.o display.o  

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

reshape.o : reshape.cpp $(HEADERS)
	$(CXX) $(CFLAGS) reshape.cpp -c

menu.o : menu.cpp $(HEADERS)
	$(CXX) $(CFLAGS) menu.cpp -c

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
