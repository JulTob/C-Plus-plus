#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    string content = "";


    outfile << infile;
/*    Alt:
    while(file >> content) {
    cout << content << ' ';
    }
    */


    return 0;
}
