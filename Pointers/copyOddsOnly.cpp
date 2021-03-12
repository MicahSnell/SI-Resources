/**
 * File: copyOddsOnly.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Pointers
 * Date: 03/04/21
 *
 * This program uses pointers to allocate dynamic memory, and returns a pointer
 * to an array from a function. The function 'copyOddsOnly' copies all the odd
 * values from the 'data' array into the result array. All the even values are
 * copied but as odd numbers instead of even. User input is given from the
 * command line. Such as:
 *   ./a.out [size of data array] [max value]
 * The 'data' array is filled with random values from 1 to max value.
 */
#include <iostream>

using namespace std;

/**
 * Name: copyOddsOnly
 * Description: copies only odd values from a given array into
 * a new dynamically allocated array and returns it to main.
 * If a value is not odd, it will be made odd.
 * Returns: a pointer to the new array
 */
int* copyOddsOnly(int data[], int size) {
  int* result = new int[size];

  for (int i = 0; i < size; ++i) {
    if (data[i] % 2 != 0)
      result[i] = data[i];
    else
      result[i] = data[i] + 1;
  }

  return result;
}

int main(int argc, char** argv) {
  if (argc != 3) {
    cout << "USAGE: ./a.out [size of array] [max value]\n\n";
    return -1;
  }

  int size = atoi(argv[1]);
  int* data = new int[size];
  int* result = NULL; // equivalent to nullptr

  bool test = true;

  srand(atoi(argv[3]));
  cout << "data:" << endl;
  for (int i = 0; i < size; ++i) {
    data[i] = rand() % atoi(argv[2]) + 1;
    cout << data[i] << " ";
  }
  cout << endl << endl;

  result = copyOddsOnly(data, size);

  cout << "result:" << endl;
  for (int i = 0; i < size; ++i) {
    if (result[i] % 2 == 0)
      test = false;

    cout << result[i] << " ";
  }
  cout << endl << endl;

  if (test)
    cout << "Passed." << endl;
  else
    cout << "Failed." << endl;

  delete [] result;
  delete [] data;
  return 0;
}
