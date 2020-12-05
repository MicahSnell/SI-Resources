/**
 * File: binarySearchVerbose.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Searching and Sorting
 * Date: 09/19/20
 * 
 * This program is a classic binary search algorithm that prints to the
 * screen each value that the given target is being compared to, and 
 * how many loops were done in order to locate the value. Finally the 
 * position of the target is returned and printed, if it exists in the array.
 */ 
#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {
   int first = 0,
       last = size - 1,
       middle,
       position = -1,
       count = 0;

   bool found = false;

   cout << endl << endl
        << "****************************************************" << endl;

   while (!found && first <= last) {
      middle = (first + last) / 2;

      ++count;
      cout << "Pass #" << count << endl
           << "Comparing " << array[middle] << " with " << target << endl
           << endl;

      if (array[middle] == target) {
	 position = middle;
	 found = true;
      }
      else if (array[middle] > target) 
         last = middle - 1;
      else
         first = middle + 1;
   }

   cout << "While loop complete, " << count << " steps were done." << endl
        << "****************************************************" << endl
        << endl << endl;
   return position;
}

int main() {
   int array[] = {1, 2, 4, 6, 8, 20, 23, 25, 27, 28, 35, 39, 52},
       size = 13,
       target;

   cout << endl
        << "The array:" << endl;
   for (int i = 0; i < size; ++i)
      cout << array[i] << " ";

   cout << endl << endl
        << "Enter a value to search for: ";
   cin >> target;

   int position;
   position = binarySearch(array,size,target);

   if (position == -1)
      cout << target << " does not exist in the array." << endl;
   else
      cout << target << " is at position " << position << " in the array." << endl;

   cout << endl;

   return 0;
}
