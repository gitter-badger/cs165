### the main rule
a.out: moveTest.o move.o
	g++ -o a.out moveTest.o move.o
	tar -cf assign14.tar *.h *.cpp makefile

### the onject files
moveTest.o: moveTest.cpp move.h
	g++ -c moveTest.cpp

move.o: move.cpp move.h
	g++ -c move.cpp