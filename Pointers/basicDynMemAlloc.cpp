/**
 * File: basicDynMemAlloc.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Pointers
 * Date: 10/01/20
 *
 * This program demonstrates dynamic memory allocation
 * using pointers and the 'new' keyword. Also demonstrated
 * is the equivalent output between array syntax and pointer
 * arithmetic.
 */
#include <iostream>

using namespace std;

int main() {
  int *newInt;

  newInt = new int;

  *newInt = 25;

  cout << "*newInt = " << *newInt << endl
       << "newInt  = " << newInt << endl << endl;


  int *newArray;

  newArray = new int[10];

  *newArray = 25;
    
  cout << "newArray[0] = " << newArray[0] << endl
       << "*newArray   = " << *newArray << endl
       << "newArray    = " << newArray << endl << endl;

 
  return 0;
}
