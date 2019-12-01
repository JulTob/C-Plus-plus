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

  //Use Strings ALWAYS!
  std::cout << "Say Something with spaces: \n" ;
  std::getline(std::cin, intext); //untill \n or endofline is detected
  std::cout << "You Said \n" << intext << "! \n \n";


  return 0;
}

/*To change Standard input:
g++ -o main.out main.cpp;
./main.out stdin=open("input.txt","r")
*/
