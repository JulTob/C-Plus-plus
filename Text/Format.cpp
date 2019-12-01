//* Preprocessor Directives *//
#include <iostream>
using namespace std;

#include <iomanip> // To format output

//* Main Function *//
int main() {
  //* code *//

  cout << "Formating Output is easy:" << endl;
  cout << "\\n" <<  " : " <<  "New Line"<< endl;
  cout << "\\t" <<  " : " <<  "Tab"<< endl;

  cout << "To stablish the (minimal) width of an output in characters (fill with spaces):" << endl;
  cout << std::setw(12) << "Text";
  cout << std::setw(10) << "Text2" ;
  cout << std::setw(1)  << "Text3" ;
  cout << std::setw(15) << "Text4" ;
  cout << endl;

  cout << "width = 15" << endl;
  cout << std::setw(15) << "Text"  ;
  cout << std::setw(15) << "Text2" ;
  cout << std::setw(15) << "Text3" ;
  cout << std::setw(15) << "Text4" ;
  cout << endl;

  cout << "Or we can format with tabs" << endl;
  cout << "Text"  <<'\t';
  cout << "Text2" <<'\t';
  cout << "Text3" <<'\t';
  cout << "Text4" <<'\t';
  cout << endl;

  return 0;
}
