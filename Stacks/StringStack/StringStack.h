/**
 * File: StringStack.h
 *
 * Author: Micah Snell
 * SI Session Topic: Stacks
 * Date: 11/12/20
 *
 * This file contains the definiton of the StringStack class.
 */
#include <string>

class StringStack {
  private:
    const static int MAX_SIZE = 10;
    std::string stackArray[MAX_SIZE];
    int top;

  public:
    StringStack() { top = -1; }

    // Stack operations
    void push_it(std::string);
    std::string pop_it();
    bool isFull() const;
    bool isEmpty() const;
};
