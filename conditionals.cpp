// An if statement is used to test an expression for truth. if it is in fact true the code block executes otherwise it is skipped. 

// else can be tacked onto an if statement. so if it is true the if statement fires if it is false the else statement fires. 

// else if can be placed between if and else to check additional conditions. 
// Example:

/* if (apple > 8) {
  // Some code here
}
else if (apple > 6) {
  // Some code here
}
else {
  // Some code here
} */

#include <iostream>

int main() {
  
  double ph = 7;  // sets variable for ph
  
  if (ph > 7) {   // if ph greater than 7 Basic
  std::cout << "Basic\n";
}
else if (ph < 7) { // if ph less than 7 Acidic
  std::cout << "Acidic\n";
}
else {              // if ph any float 7 - 7.9999___ neutral
  std::cout << "Neutral\n";
}  

/* A switch statement provides a means of checking an expression against various cases. If there is a match, the code within starts to execute. The break keyword can be used to terminate a case.

default is executed when no case matches. */

int grade = 11;  // sets grade variable

switch (grade) { // switch similar to if else if else 
 
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:  // similar to a final else if it is none of these things do this... 
    std::cout << "Invalid\n";
    break;  // exits the code block. 
 
}

}
