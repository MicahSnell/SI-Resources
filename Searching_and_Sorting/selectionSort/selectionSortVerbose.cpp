/**
 * File: selectionSortVerbose.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Searching and Sorting
 * Date: 03/12/20
 *
 * This program is a selection sort algorithm that can be run with in 3
 * different output modes using command line flags:
 *   1. -s Will display the loop number and all of the values and indexes
 *         that were swapped in one pass of the for loop.
 *   2. -a Will display the loop number and the array after each pass of the
 *         do-while loop.
 *   3. -v Will display the loop number and the output from both 1. and 2.
 *         together.
 *   Ex. ./a.out -v
 *
 * This will help demonstrate the way that selection sort operates.
 */
#include <iostream>

using namespace std;

bool swapOutput = false,
     arrayOutput = false,
     verboseOutput = false;

void selectionSort (int array[], int size) {
  int currentSmallest;
  for (int i = 0; i < size - 1 ; ++i) {
    if (swapOutput || arrayOutput || verboseOutput) {
      cout << endl
           << "Pass #" << i + 1 << endl;
      if (swapOutput || verboseOutput)
        cout << "Starting at " << i << endl;
    }

    currentSmallest = i;
    for (int j = i; j < size; ++j) {
      if (array[j] < array[currentSmallest]) {
        if (swapOutput || verboseOutput) {
          cout << "array[" << j << "] = " << array[j] << ", array[" << currentSmallest << "] = " << array[currentSmallest] << endl
               << "array[" << j << "] < array[" << currentSmallest << "]" << endl
               << "setting currentSmallest = " << j << endl;
        }
        currentSmallest = j;
      }
    }

    if (swapOutput || verboseOutput) {
      cout << "array[" << i << "] = " << array[i] << ", array[" << currentSmallest << "] = " << array[currentSmallest] << endl
           << "swapping array[" << i << "] with array[" << currentSmallest << "]" << endl;
    }
    swap(array[i], array[currentSmallest]);

    if (arrayOutput || verboseOutput) {
      for (int k = 0; k < i + 1; ++k)
        cout << array[k] << " ";
      cout << endl;
    }
  }

  if (swapOutput || arrayOutput || verboseOutput)
    cout << endl << "Sort complete!" << endl;

  if (arrayOutput || verboseOutput) {
    for (int k = 0; k < size; ++k)
      cout << array[k] << " ";
    cout << endl;
  }
}

int main(int argc, char** argv) {
  if (argc > 1) {
    string flag = argv[1];
    if (flag.compare("-s") == 0)
      swapOutput = true;
    else if (flag.compare("-a") == 0)
      arrayOutput = true;
    else if (flag.compare("-v") == 0)
      verboseOutput = true;
  }
  if (argc == 1) {
    cout << "This program can be run with extra output." << endl
         << "Ex: ./a.out -v" << endl
         << "Optional parameters are -s, -a, and -v" << endl;
  }

  int array[] = {126, 556, 343, 230, 142, 676, 887, 991, 9001, 122, 456},
      size = 11;

  cout << endl
       << "Array before selectionSort: ";
  for (int i = 0; i < size; ++i)
    cout << array[i] << " ";
  cout << endl;

  selectionSort(array, size);

  cout << endl
       << "Array after selectionSort: ";
  for (int i = 0; i < size; ++i)
    cout << array[i] << " ";
  cout << endl << endl;

  return 0;
}
