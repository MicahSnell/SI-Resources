/**
 * File: Student.h
 *
 * Author: Micah Snell
 * SI Session Topic: Classes
 * Date: 10/17/20
 *
 * This file contains the definiton of the Student class.
 */
#include <string>

class Student {
  private:
    std::string name;
    std::string year;
    int grades[3];
    double average = 0;

  public:
    // Default constructor
    Student();
    // Non-default constructor
    Student(std::string, std::string);

    // Mutators
    void setGrades(int []);
    void setName(std::string);
    void setYear(std::string);
    void calcAverage();

    // Accessors
    std::string getName() const;
    std::string getYear() const;
    std::string getGrades() const;
    double getAverage() const;
};
