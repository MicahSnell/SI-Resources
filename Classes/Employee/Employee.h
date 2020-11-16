/**
 * File: Employee.h
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/20/20
 *
 * This file contains the definiton of the Employee class.
 */
#include <string>

class Employee {
  private:
    std::string name;
    int empNum;
    double payRate;

  public:
    // Default constructor
    Employee();
    // Non-default constructor
    Employee(std::string, int, double);

    // setters a.k.a. mutators
    void setName(std::string);
    void setEmpNum(int);
    void setPayRate(double);

    // getters a.k.a accessors
    std::string getName() const;
    int getEmpNum() const;
    double getPayRate() const;
};
