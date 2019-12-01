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
  std::string name1;
  std::string address1;
  std::string phone1;

  std::string name2, address2,  phone2;


  //Use Strings ALWAYS!
  std::cout << "Name: \n" ;
  std::getline(std::cin, name1);
  std::cout << "Address: \n" ;
  std::getline(std::cin, address1);
  std::cout << "Phone: \n" ;
  std::getline(std::cin, phone1);

  std::cout << "Name: \n" ;
  std::getline(std::cin, name2);
  std::cout << "Address: \n" ;
  std::getline(std::cin, address2);
  std::cout << "Phone: \n" ;
  std::getline(std::cin, phone2);

  std::cout << name1 << "\n";
  std::cout << "\t"<< address1<< "\n";
  std::cout << "\t"<< phone1<< "\n";

  std::cout << name2 << "\n";
  std::cout << "\t"<< address2<< "\n";
  std::cout << "\t"<< phone2<< "\n";

  return 0;
}
