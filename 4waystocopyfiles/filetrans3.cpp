#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream fin ("data.txt");

    ofstream fout("new.txt");

    string line;

    while( std::getline( fin, line, '.' ) )
    {
      fout << line << '\n' ;
    }

    fin.close();
    cout<<"done"<<endl;

    return 0;
}
