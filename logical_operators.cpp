#include<iostream>
int main() {

// when trying to control flow in a program often one condition is not enough to satisfy a test. 
// in these cases we use logical operators to test multiple conditions
/*  &&: the and logical operator
    ||: the or logical operator
    !: the not logical operator
    */

  // && (and) requires both conditions to be true to return true
  // || (or) only one condition or the other must be true. if both are the same it will return false
  // !  (not) operator reverses the state so !true == false
  
  int hunger = true;
  int anger = true;
  
  if (hunger && anger) { // so if hunger and anger are both true we get the output Hangry!
    
    std::cout << "Hangry!\n";
  }
 
  int day = 6;
  
  if (day == 6 || day == 7) { //this is checking to see of day is 6 or 7 and outouting weekend. any other day will not give the desired output. 
  std::cout << "weekend\n";
  }
 
  bool logged_in = false;
  
  // Write the code below:
  if (!logged_in) {  // this is checking the state of logged in. if logged in is not true it will say try again. 
    std::cout << "Try again\n";
  }  
  
}
