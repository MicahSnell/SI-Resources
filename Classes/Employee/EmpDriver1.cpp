/**
 * File: EmpDriver1.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/20/20
 *
 * This program demonstrates a simple class called 'Employee.' This driver
 * declares an instance 'e1' of the Employee class. The 'e1' object uses the
 * default constructor, and then three setter functions to set the name, number,
 * and pay rate of 'e1.' Lastly, each of the three values are displayed using
 * three getter functions.
 *
 * Build this program using the provided makefile by typing:
 * make Emp1
 * Run this program by typing:
 * ./Emp1
 */
#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
  Employee e1;

  e1.setName("First Last");
  e1.setEmpNum(141248);
  e1.setPayRate(18.75);

  cout << "Name: " << e1.getName() << endl
       << "Number: " << e1.getEmpNum() << endl
       << "Pay Rate: " << e1.getPayRate() << endl;

  return 0;
}
