//* Preprocessor Directives *//

#include <iostream>
#include <string>

/*
  //Standard Output
  std::cout << "*message*" << '\n';
  //Standard Input
  std::cin >> *variable*;
*/

//* Main Function *//
int main() {
  //* code *//
  int my_number = 0;
  std::string intext="";
  std::string intext2;

  // Output
  std::cout << "\n"<< "Say a Number" << "\n \n";
  //Input (Waits for it)
  std::cin >> my_number;
  //We can use the input now
  std::cout << "\n"<< "You Said " << my_number << "\n \n";

  //Safety! Use Strings.
  std::cout << "\n"<< "Say Something" << "\n \n";
  std::cin >> intext;
  std::cout << "\n"<< "You Said " << intext << "\n \n";
  //But it doesn't get more after spaces


  return 0;
}

/*To change Standard input:
g++ -o main.out main.cpp;
./main.out stdin=open("input.txt","r")

*/
