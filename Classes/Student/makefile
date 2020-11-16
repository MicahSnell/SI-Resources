Student: StudentDriver.o Student.o
	g++ -o Student StudentDriver.o Student.o

StudentDriver.o: StudentDriver.cpp Student.h
	g++ -c StudentDriver.cpp -std=c++11

Student.o: Student.cpp Student.h
	g++ -c Student.cpp -std=c++11

clean:
	rm *.o

cleanall:
	rm *.o Student
