/**
 * File: pointers.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Pointers
 * Date: 09/28/20
 *
 * This program demonstrates the various characteristics
 * of pointers. 
 */
#include <iostream>

using namespace std;

int main() {
  int *ptr;
  int x = 6;

  cout << endl << endl;

  ptr = &x;

  cout << "X only:     " << x << ", expected 6" << endl
       << "Addr  of x: " << &x << ", expected hex address" << endl
       << "Ptr only:   " << ptr << ", expected same address of x" << endl
       << "Ptr deref:  " << *ptr << ", expected 6" << endl
       << endl << endl;

  *ptr = 11;

  cout << "Ptr deref: " << *ptr << ", expected 11" << endl
       << "X only:    " << x << ", expected 11" << endl
       << "addr of x: " << &x << endl
       << endl << endl;

  *ptr = *ptr * 2;

  cout << "Ptr deref: " << *ptr << ", expected 22" << endl
       << "X only:    " << x << ", expected 22" << endl
       << endl << endl;

  *ptr = *ptr * 3;

  cout << "Ptr deref: " << *ptr << ", expected 66" << endl
       << "X only:    " << x << ", expected 66" << endl
       << endl << endl;

  cout << endl << endl;

  return 0;
}
