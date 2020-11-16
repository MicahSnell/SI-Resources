/**
 * File: copyArray.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Pointers
 * Date: 10/01/20
 *
 * This program uses pointers to allocate dynamic memory, and returns an array
 * from a function. The function 'copyValues' copies the values stored in the
 * 'data' array and returns it to the result pointer in main. Then the values
 * are printed to the screen using pointer arithmetic. Lastly, the memory that
 * was allocated is freed using 'delete.'
 */
#include <iostream>

using namespace std;

int *copyValues(int size, int data[]) {
  int *newArray;
  newArray = new int[size];

  for (int i = 0; i < size; ++i)
    newArray[i] = data[i];

  return newArray;
}

int main() {
  int data[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      userInput;

  int *result; // a pointer that will point to the returned value from copyArray

  cout << "Enter a value between 1 and 10: ";
  cin >> userInput;

  while (userInput < 1 || userInput > 10) {
    cout << "Invalid input, try again: ";
    cin >> userInput;
  }

  result = copyValues(userInput, data);

  cout << "Result: ";
  for (int i = 0; i < userInput; ++i)
    cout << *(result + i) << " ";

  cout << endl;

  delete [] result;
  return 0;
}
