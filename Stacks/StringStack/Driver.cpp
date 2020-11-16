/**
 * File: Driver.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Stacks
 * Date: 11/12/20
 *
 * This program demonstrates a simple class called 'StringStack.' The class
 * implements a static stack using an array of strings. This driver declares an
 * instance 'stack' of the StringStack class. The 'stack' object uses the
 * default constructor, which sets the index of the stack array to -1. The
 * 'stack' object pushes three strings onto the stack and then pops and outputs
 * them to the screen. This demonstrates the First-In Last-Out characteristic
 * of a stack.
 *
 * Build this program using the provided makefile by typing:
 * make
 * Run this program by typing:
 * ./run 
 */
#include <iostream>
#include "StringStack.h"

using namespace std;

int main() {
  StringStack stack;

  if (stack.isEmpty()) {
    cout << "the stack is empty" << endl;
  }
  else if (stack.isFull()) {
    cout << "the stack is full" << endl;
  }

  stack.push_it("!");
  stack.push_it("World");
  stack.push_it("Hello");

  string x;
  while (!stack.isEmpty()) {
    x = stack.pop_it();
    cout << x << " ";
  }
  cout << endl;

  if (stack.isEmpty()) {
    cout << "the stack is empty" << endl;
  }
  else if (stack.isFull()) {
    cout << "the stack is full" << endl;
  }

  return 0;
}
