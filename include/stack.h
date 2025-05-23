#ifndef STACK_H
#define STACK_H

// Stack abstract data type definition
class Stack
{
public:
  Stack(int=10);
  // constructor with an argument that will be used to initialize the stack with a given size.
  // When a stack is initially created, the private data members should be initialized
  void push(char);//Push a character onto the top of a stack.
  char pop();//Return the topmost element from a stack
  void reset();//Reset stackPtr to 0. This says that the stack is reset.
  bool empty();// Return true if a stack is empty
  bool full();// Return true if a stack is full

private:
  int stackSize; // size of a stack
  int stackPtr; // the number of characters stored in the stack. It should be also used as an
                // index into a stack entry where the top most element is located in the stack.
  char *charStack ; // a character pointer that points to a character array which should be
                // created dynamically using new statement
}; // end class Stack

void checkExpression(std::string expr, Stack expressionStack);

#endif
