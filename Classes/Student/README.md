# Instructions
This program can be built using the provided `makefile` or by using the `g++` command.

## Makefile
Type
```bash
make
```
to build the program.
Type
```bash
./Student
```
to run the program.

## g++
### Method #1
Type
```bash
g++ *.cpp -std=c++11
```
Which will create the executable `a.out` by compiling and linking `StudentDriver.cpp` and `Student.cpp` 
  
Type
```bash
./a.out
```
to run the program.
  
### Method #2
Type
```bash
g++ -c -std=c++11 StudentDriver.cpp Student.cpp
```
to compile `StudentDriver.cpp` and `Student.cpp` into object files `StudentDriver.o` and `Student.o` respectively.  
  
Then type
```bash
g++ -o yourFileName StudentDriver.o Student.o
```
to build an executable file called `yourFileName`  
  
Run the program by typing
```bash
./yourFileName
```
