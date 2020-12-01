/**
 * File: arraysArePointers.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Pointers
 * Date: 10/01/20
 *
 * This program demonstrates the characteristics of pointers
 * and arrays. The pointer 'otherArray' is set equal to 
 * 'smallArray', so both pointers are pointing at the same
 * memory location. Several cout statements are done to 
 * demonstrate the equivalency of 'smallArray' and 'otherArray.'
 * Both variables are pointers to the first value 1. Both
 * variables can use array syntax or pointer arithmetic to 
 * print the contents of the array. 
 */
#include <iostream>

using namespace std;

int main() {
  int smallArray[] = {1, 5, 7, 9};
  int *otherArray;

  otherArray = smallArray;

  cout << endl << endl;

  cout << "smallArray by itself: " << smallArray << ", expected address" << endl
       << "otherArray by itself: " << otherArray << ", expected same address" << endl
       << endl << endl;

  cout << "otherArray[0]: " << otherArray[0] << ", expected 1" << endl
       << "smallArray[0]: " << smallArray[0] << ", expected 1" << endl
       << endl << endl;

  cout << "*otherArray: " << *otherArray << ", expected 1" << endl
       << "*smallArray: " << *smallArray << ", expected 1" << endl
       << endl << endl;

  cout << "otherArray: ";
  for (int i = 0; i < 4; ++i)
    cout << otherArray[i] << " ";
  cout << endl;

  cout << "smallArray: ";
  for (int i = 0; i < 4; ++i)
    cout << smallArray[i] << " ";
  cout << endl;

  cout << endl << endl;

  cout << "otherArray: ";
  for (int i = 0; i < 4; ++i)
    cout << *(otherArray + i) << " ";
  cout << endl;

  cout << "smallArray: ";
  for (int i = 0; i < 4; ++i)
    cout << *(smallArray + i) << " ";
  cout << endl << endl;

  return 0;
}
