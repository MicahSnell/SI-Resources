/**
 * File: twoNodeList.cpp
 *
 * Author: Micah Snell
 * SI Session Topic: Linked-Lists
 * Date: 10/26/20
 *
 * This program contains a structure called ListNode that has a double type
 * variable called 'value' and a ListNode type pointer called 'next.' The
 * program uses the 'new' keyword to allocate two ListNode structures, and uses
 * the ListNode pointer 'newNode' to manipulate them. The ListNode pointer
 * 'head' points to the first node in the list.
 *
 * Fill in the cout statments on lines 35, 36, 37, 46, 47 with what you expect
 * the output to be. Compile with: g++ -std=c++11 twoNodeList.cpp
 */
#include <iostream>
using namespace std;

// The Linked-List structure
struct ListNode {
  double value;
  ListNode *next; // will point to the next element or nullptr if last node
};

int main() {
  ListNode *head = nullptr;
  ListNode *newNode = new ListNode;

  newNode->value = 1.2;
  newNode->next = nullptr;

  head = newNode;

  cout << head->value << ", expected: " << endl
       << (*newNode).value << ", expected: " << endl
       << newNode->value << ", expected: " << endl;

  newNode = new ListNode;
  newNode->value = 2.4;
  newNode->next = nullptr; // since line 27 changes newNode->next = head, this
                           // assignment statement isnt necessary
  newNode->next = head;
  head = newNode;

  cout << head->value << ", expected: " << endl
       << newNode->value << ", expected: " << endl;

  return 0;
}
