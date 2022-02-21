/*
Hexadecimals and sizes exmpls

*/


#include <iostream>
using namespace std;



int main()
{
   cout << "0xFF: "
        << endl
        << 0xFF
        << " decimal"
        << endl
        << hex << 0xFF      //Hex mode
        << " hexadecimal"
        << endl
        << dec << 0xFF      //Dec mode
        << " de|hex|decimal"
        << oct << 0xFF      //Octal mode
        << dec              //Dec mode
        << " octal"
        << 022      //Octal mode
        << dec              //Dec mode
        << " octal number in dec"
        << endl;

cout << "22: "
        << endl
        << 22
        << " decimal"
        << endl
        << hex << 22
        << " hexadecimal"
        << endl
        << dec << 22
        << " de|hex|decimal"
        << endl;

   cout << "0: "
        << endl
        << 0
        << " decimal"
        << endl
        << hex << 0
        << " hexadecimal"
        << endl
        << dec << 0
        << " de|hex|decimal"
        << endl;


   return 0;
}
