/******************************************************
Takes a string from input and reverses it at the output 
*******************************************************/
//  Julio Toboso

#include <iostream>
#include <string>

#include <cstdlib>   // The C standard header stdlib.h

#include <algorithm>

using namespace std;


int main( )
{
    string line;

    // Read the entire input at the standard input device and store in 'line'.
    while( getline( cin, line ) ) {
        reverse( line.begin( ), line.end( ) );
        cout << line << "\n";
    }

    return 0;
}
