/**
 * File: EmpDriver2.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/20/20
 *
 * This program demonstrates a simple class called 'Employee.' This driver
 * declares an instance 'e2' of the Employee class. The 'e2' object uses the
 * defined constructor which accepts three arguments: a name, number, and pay
 * rate. Then, each of the three values are displayed using
 * three getter functions. Notice that this driver does not use any setter
 * functions, because the three values that were set in EmpDriver1 are set
 * by the constructor.
 *
 * Build this program using the provided makefile by typing:
 * make Emp2
 * Run this program by typing:
 * ./Emp2
 */
#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
  Employee e2("First Last", 141248, 18.75);

  cout << "Name: " << e2.getName() << endl
       << "Number: " << e2.getEmpNum() << endl
       << "Pay Rate: " << e2.getPayRate() << endl;

  return 0;
}
