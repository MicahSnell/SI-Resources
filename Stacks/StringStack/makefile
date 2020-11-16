run: Driver.o StringStack.o
	g++ -o run Driver.o StringStack.o

Driver.o: Driver.cpp StringStack.h
	g++ -c Driver.cpp -std=c++11

StringStack.o: StringStack.cpp StringStack.h
	g++ -c StringStack.cpp -std=c++11

clean:
	rm *.o

cleanall:
	rm *.o run
