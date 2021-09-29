/*
A variable is simply a name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.

  Type      Use                     Example

  int       Interger Numbers        0, 399, 1000

  double    floating-point numbers  3.14, -200.0

  char      charicters              a, @, X, o

  string    sequence of charicters  "Hello World!" "Brad"

  bool      truth values            true false

  before we can use a variable it has to be created or declaired. 
  To declair a variable you have to provide two things the type and a name for the variable. 

  int score = 0;

  int is the type, score is the name, = in C++ does not mean equalls its an assigner giving score the value 0. 
  The ";" tells the program you are done with that statement
  
  C++ is strongly typed if you try to use a float in a variable declaired as an int it will not convert it or fix it automagically like Python. 


*/

#include <iostream>

int main() {
  int age = 28;
 
std::cout << "Hello, I am ";
std::cout << age;
std::cout << " years old\n";
// outputs Hello, I am 28 years old
// We can chain this together to get less lines like this:

std::cout << "Hello, I am " << age << " years old\n";
// this is cleaner code and gives the same output. 

// we use cout for output to the screen
// cin is how we get input from the user

int tip = 0;    // interger variable tip set to 0
  
  std::cout << "Enter tip amount: "; // Prints enter tip ammount to screen
  std::cin >> tip; // asks for a user input and assignes it to the variable tip
  
  std::cout << "You paid " << tip << " dollars.\n"; // chains two strings with user input tip
