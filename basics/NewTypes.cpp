//* Preprocessor Directives *//
#include <iostream>
using namespace std;

//* Main Function *//
int main() {
  //* code *//
  /*C++ also allows for enumerated constants.
   This means the programmer can create a new
    variable type and then assign a finite
    number of values to it. Here is the form
     of the enum keyword:
  */
  /*
  enum type_name {
      value1,
      value2,
      value3,
      .
      .
  } object_names;
  */

   enum MONTH { Jan, Feb, Mar,
                Apr, May, Jun,
                Jul, Aug, Sep,
                Oct, Nov, Dec};
    //These are ACTUALLY numbers 0-11


    MONTHS myMonth;
        // New Variable in New Type
    myMonth = Jan;
        // Initialization of the New var 
  return 0;
}
