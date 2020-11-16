/**
 * File: StudentDriver.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/17/20
 *
 * This program tests the function of the Student class. An array of 3 student
 * class objects is declared, the first two elements of the array are
 * initialized with the non-default constructor, and the last element is
 * initialized with the default constructor. For loops are used to show how the
 * user can input data with the array of class objects.
 *
 * Build this program using the provided makefile by typing:
 * make
 * Run this program by typing:
 * ./Student 
 */
#include <iostream>
#include "Student.h"

using namespace std;

int main() {
  Student students[3] = { Student("John Wayne", "Freshman"),
                          Student("Micah Snell", "Senior"),
                          Student() };

  // set the last students name and year; either by the user or hardcoded
  string temp, temp1;
  cout << "Name: ";
  getline(cin, temp);
  cout << "Year: ";
  getline(cin, temp1);
  cout << endl;

  students[2].setName(temp);
  students[2].setYear(temp1);

  // prompt the user for the 3 grades for each student and then set them using
  // the provided setGrades(int []) method
  int array[3];
  for (int i = 0; i < 3; ++i) {
    cout << "Student " << i + 1 << endl
         << "Grade 1: ";
    cin  >> array[0];
    cout << "Grade 2: ";
    cin >> array[1];
    cout << "Grade 3: ";
    cin >> array[2];
    cout << endl;

    students[i].setGrades(array);
  }

  // calculate each students average
  for (int i = 0; i < 3; ++i)
    students[i].calcAverage();

  // print each students name, year, and average
  for (int i = 0; i < 3; ++i) {
    cout << "Name: " << students[i].getName() << endl
         << "Year: " << students[i].getYear() << endl
         << "Average: " << students[i].getAverage() << endl << endl;
  }

  return 0;
}
