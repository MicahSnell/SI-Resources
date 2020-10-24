/**
 * File: bubbleSortVerbose.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Searching and Sorting
 * Date: 09/21/20
 *
 * This program is a classic bubble sort algorithm that can be run with in 3
 * different output modes using command line flags:
 *   1. -s Will display the loop number and all of the values and indexes
 *         that were swapped in one pass of the for loop.
 *   2. -a Will display the loop number and the array after each pass of the
 *         do-while loop.
 *   3. -v Will display the loop number and the output from both 1. and 2.
 *         together.
 *   Ex. ./bubbleSortVerbose -v
 *
 * This will help demonstrate the way that bubble sort operates.
 */
#include <iostream>
using namespace std;

bool swapOutput = false,
     arrayOutput = false,
     verboseOutput = false;

void bubbleSort(int list[], int size) {
  bool swapped;
  int count = 1;

  do {
    if (swapOutput || arrayOutput || verboseOutput) {
      cout << endl
           << "Pass #" << count << ":" << endl;
    }

    swapped = false;
    for (int i = 0; i < size - 1; ++i) {
      if (list[i] > list[i + 1] ) {
        if (swapOutput || verboseOutput) {
          cout << "Swaping index: " << i << " with index: " << i + 1 << endl;
          cout << "Swaping values: " << list[i] << " with value: "
               << list[i + 1] << endl;
        }
        swap(list[i], list[i + 1]);
        swapped = true;
      }
    }

    if (arrayOutput || verboseOutput) {
      for (int i = 0; i < size; ++i)
        cout << list[i] << " ";
      cout << endl;
    }

    if (!swapped && (swapOutput || arrayOutput || verboseOutput))
      cout << "Sort complete!" << endl << endl;
    else
      ++count;
  } while (swapped == true );
}

int main(int argc, char *argv[]) {
  int array[] = {6, 556, 343, 23, 1, 676, 88, 99, 9001, 122, 3},
      size = 11;

  if (argc > 1) {
    string flag = argv[1];
    if (flag.compare("-s") == 0)
      swapOutput = true;
    else if (flag.compare("-a") == 0)
      arrayOutput = true;
    else if (flag.compare("-v") == 0)
      verboseOutput = true;
  }

  cout << endl
       << "Array before bubbleSort: ";
  for (int i = 0; i < size; ++i)
    cout << array[i] << " ";
  cout << endl;

  bubbleSort(array, size);

  cout << "Array after bubbleSort: ";
  for (int i = 0; i < size; ++i)
    cout << array[i] << " ";
  cout << endl << endl;

  return 0;
}
