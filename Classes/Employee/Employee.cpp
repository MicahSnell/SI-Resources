/**
 * File: Employee.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/20/20
 *
 * This file contains the implementation of the Employee class.
 */
#include "Employee.h"

// Default constructor
Employee::Employee() {;}

// Non-default constructor
Employee::Employee(std::string n, int num, double rate) {
  name = n;
  empNum = num;
  payRate = rate;
}

// Setters a.k.a. mutators
void Employee::setName(std::string n) {
  name = n;
}

void Employee::setEmpNum(int num) {
  empNum = num;
}

void Employee::setPayRate(double rate) {
  payRate = rate;
}

// Getters a.k.a. accessors
std::string Employee::getName() const {
  return name;
}

int Employee::getEmpNum() const {
  return empNum;
}

double Employee::getPayRate() const {
  return payRate;
}
