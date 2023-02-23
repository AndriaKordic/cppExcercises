#include <iomanip>
#include <iostream>
#include <string>

#include <arrays/quickSort.hpp>

using namespace std;

// a global variable
int tmp = 8;

// overloaded function
int   overloadAdd(int prvi, int drugi) { return prvi + drugi; }
float overloadAdd(float prvi, float drugi) { return prvi + drugi; }
// declaring an array
int   sortMe [13] = {11, 13, 7, 9, 1, 18, 19, 2, 9, 1, 3, 15, 6};

// defining a function: type funcName (parameters) {funcBody}
int main(int argc, char* argv[]) {

  int expanding = 0; // a variable initialized inside function body, exists only inside function body

  // Statements
  // Simple statement
  std::cout << "Hello world" << std::endl;

  // compound statements
  // sequence, the simplest form of compound statements, also known as a block. May be empty {}
  {
    std::cout << "the sum of 7 and 3 is:\n";
    std::cout << (7 + 3) << std::endl;
    int declaredWithinSequence = 8;
  }

  // selections
  std::cout << "if Selection:" << std::endl;
  // basic selection
  if(tmp) { // if the logic expresion has the value of logical truth (!=0)
    std::cout << "logic check has comeee back true" << std::endl;
  } else { // if the logic expresion has the value of logical false (=0) //the else statement belongs to the first if statement above itself.
    std::cout << "this is not going to be executed" << std::endl;
  }

  // switch selection
  switch(tmp) // expression is evaluated once
  {
  case 0: // code block will be executed if the switch expression is equal to the case value
    std::cout << "this code block will not be executed" << std::endl;
    break; // controle statement which exits the compound statement or termination of a loop

  case 8:
    std::cout << "switch expression value is equal to case value" << std::endl;

  case 10: // this code block is executed becuse the switch did not encounter the break statement
    std::cout << "switch expression value is not equal to case value" << std::endl;

  default: // this code block is executed if there was no match for the switch expression value
    std::cout << "default code block" << std::endl;
    break;
  }

  // loops
  // basic loop with check at start
  while(expanding < tmp) // loop check
  {
    // loop body
    std::cout << expanding << std::endl;
    expanding++;
  }

  // generalised loop with check at start
  for(expanding = 0; expanding < tmp; expanding++) {
    std::cout << expanding << std::endl;
  }

  expanding = 0;

  // loop with check at end
  do {
    std::cout << expanding << std::endl;
    expanding++;
    continue; // controle statement which end current iteration
    std::cout << "this is skipped" << std::endl;

  } while(expanding < tmp); // the check

  // jump to label
  goto hopCup;

  std::cout << "skipped line" << std::endl;

hopCup: // label

  // TODO: napisi primer side effect-a

  // references
  int        a  = 2; // declared integer
  int&       r1 = a; // reference to integer
  const int& r2 = a; // constant reference to integer
  std::cout << (r1, r2) << std::endl;
  r1++; // valid
  // r2 ++;           // invalid, cannot change the values of references with const modifier
  std::cout << r1 << std::endl;

  string keyInput = "";
  std::cout << "enter text that is to be manipulated" << std::endl;
  std::cin >> setw(14) >> keyInput; // using setw() to set maximum number of characters to be taken from input

  std::cout << (keyInput) << std::endl;

  int   overloadAdd(int first, int second);
  float overloadAdd(float first, float second);

  // defining dinamic variables
  float* deleteMe1 = new float(7.12);
  float* deleteMe2 = new float(4.81);

  expanding  = overloadAdd(expanding, tmp);         //calling the function 
  *deleteMe1 = overloadAdd(*deleteMe1, *deleteMe2);

  std::cout << expanding << std::endl;
  std::cout << *deleteMe1 << std::endl;

  // deleting dynamic variables
  delete deleteMe2, deleteMe1;

  quickSort::sortArr (sortMe, 13);
  // TODO: outputArray(sortMe);

  return tmp;  // the return statement forwards returns only one parameter to the function that called this function
}