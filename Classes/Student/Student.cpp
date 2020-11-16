/**
 * File: Student.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/17/20
 *
 * This file contains the implementation of the Student class.
 */
#include "Student.h"

 // Default constructor
Student::Student() {
  name = "First Last";
  year = "Freshman";
}

// Non-default constructor
Student::Student(std::string n, std::string y) {
  name = n;
  year = y;
}

// Mutators
void Student::setName(std::string n) {
  name = n;
}

void Student::setYear(std::string y) {
  year = y;
}

void Student::setGrades(int g[]) {
  for (int i = 0; i < 3; ++i)
    grades[i] = g[i];
}

void Student::calcAverage() {
  for (int i = 0; i < 3; ++i) {
    average += grades[i];
  }

  average /= 3;
}

// Accessors
std::string Student::getName() const {
  return name;
}

std::string Student::getYear() const {
  return year;
}

double Student::getAverage() const {
  return average;
}

std::string Student::getGrades() const {
  return std::to_string(grades[0]) + " " +  std::to_string(grades[1]) + " " + std::to_string(grades[2]);
}
