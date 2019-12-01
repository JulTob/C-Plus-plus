//* Preprocessor Directives *//
#include <iostream>
using namespace std;

//* Main Function *//
int main() {
  //* code *//
  const int variableI = 100;
  int variableII = 100;

  cout << variableI <<  " : " <<  sizeof(variableI)<< endl;
  cout << variableII <<  " : " <<  sizeof(variableII)<< endl;

  return 0;
}
