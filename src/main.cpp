#include <iostream>
#include <string>
#include <iomanip>
#include "stack.h"
using namespace std;

/*
Implement an algorithm as a global function checkExpression(string, Stack &) 
to check whether a given arithmetic expression such as (12+3*30)+(20) is correct. 
The first parameter will hold an expression. The second parameter will be 
a stack used to process an expression.
A correct expression is defined as an expression which contains the same number 
of (‘s and )’s. That is, if there is a (, the expression should have a 
corresponding ). For example, the above expression is a correct one. The expression 
)2+3( is incorrect, but (2+3) is correct. Certainly, 2+3 is also correct.
*/

int main()
{
  int numTest;
  int sizeOfStack;
  string arithExpr;

  cin >> sizeOfStack;
  cin >> numTest;
  Stack exprStack(sizeOfStack);
  for(int j=0; j < numTest ; j++){
    cin >> arithExpr;
    checkExpression(arithExpr, exprStack);
    exprStack.reset();
  } // end for (int j= )
  return 0;
}
