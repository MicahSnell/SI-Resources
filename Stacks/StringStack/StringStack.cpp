/**
 * File: StringStack.cpp
 *
 * Author(s): SI Session Participants! 
 * SI Session Topic: Stacks
 * Date: 11/12/20
 *
 * This file contains the implementation of the StringStack class.
 */
#include "StringStack.h"
#include <cassert>

using namespace std;

void StringStack::push_it (string title)
{

    assert(!isFull());

    top++;

    stackArray[top] = title;

}

string StringStack::pop_it ()
{
    assert (!isEmpty());

    string title = stackArray[top];
    top--;
    return title;
}

bool StringStack::isFull () const
{
    return (top == MAX_SIZE -1);
}

bool StringStack::isEmpty () const
{
    return (top == -1);
}
