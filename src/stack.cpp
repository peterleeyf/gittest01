#include <iostream>
#include <string>
#include <iomanip>
#include "stack.h"
using namespace std;

/*
Create a Stack class of character with the following private data: 
 int stackSize; // size of a stack
 int stackPtr; // the number of characters stored in the stack. It should be also used as an
               // index into a stack entry where the top most element is located in the stack.
 char *charStack; // a character pointer that points to a character array which should be
                  // created dynamically using new statement.
The Stack class with the following member functions:
 Stack(int =10); // constructor with an argument that will be used to initialize the stack with a given size.
                 // When a stack is initially created, the private data members should be initialized.
 void push(char); // Push a character onto the top of a stack.
 char pop(); // Return the topmost element from a stack
 void reset(); // Reset stackPtr to 0. This says that the stack is reset.
 bool empty(); // Return true if a stack is empty
 bool full(); // Return true if a stack is full
*/

class Stack {
  public:
    Stack() {
      stackSize = 10;
    }
    Stack(int i) {
      stackSize = i;
    }
  private:
    int stackSize;
};
