//* Preprocessor Directives *//
#include <iostream>
using namespace std;

#include <iomanip>


#include <fstream>
  /*
  //Create Stream
    output file to write:
    ofstream myFile;  //output Stream

    Input file to read:
    ifstream myFile; //input Stream

    I/O file:
    fstream myFile;   //

  //Open
  myFile.open("fileName");

  //write / read

  //Close
  myFile.close();
  */

#include <string>


//* Main Function *//
int main() {
  //* code *//
  string line;

  //create an output stream to write to the file
  //append the new lines to the end of the file
  fstream myfile ("input.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << "\nI am adding a line.\n";
        myfile.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    fstream myfileR ("input.txt");
      //During the creation of ifstream, the file is opened.
      //So we do not have explicitly open the file.
      if (myfileR.is_open())
      {
          while ( getline(myfileR,line) )
          {
              cout << line << '\n';
          }
          myfileR.close();
      }

      else cout << "Unable to open file for reading"<<"\n";

  return 0;
}
