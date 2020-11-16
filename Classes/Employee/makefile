Emp1: EmpDriver1.o Employee.o
	g++ -o Emp1 EmpDriver1.o Employee.o

EmpDriver1.o: EmpDriver1.cpp Employee.h
	g++ -c EmpDriver1.cpp -std=c++11

Emp2: EmpDriver2.o Employee.o
	g++ -o Emp2 EmpDriver2.o Employee.o

EmpDriver2.o: EmpDriver2.cpp Employee.h
	g++ -c EmpDriver2.cpp -std=c++11

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp -std=c++11

clean:
	rm *.o

cleanall:
	rm *.o Emp1 Emp2
