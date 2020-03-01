//* Preprocessor Directives *//
#include <iostream>
  /*  #  : Preprocessor Directive Call */
  /*  include  : Include the Library   */
  /*  iostream : the Library           */
  /*  <...>  : Look where the
      standard libraries are kept      */
  /*  "..."  : Look in the current
      directory, then look where the
      standard libraries are kept      */

//* Main Function *//
int main() {
  
  
  std::cout << "Hello World" << '\n';
  
  /* code */
  
  return 0;
    /* 0 : Compiled without errors */
}


/* To Compile:
g++ main.cpp -o main.out
*/

/* To Run:
./main.out
*/

/* To Compile and Run:
g++ main.cpp -o main.out; ./main.out
*/
