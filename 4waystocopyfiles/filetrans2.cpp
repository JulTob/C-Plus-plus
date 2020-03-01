void solve(string inputFileName, string outputFileName)
{
//declaring variables
string filename = inputFileName;

//Open a stream for the input file
ifstream inputFile;
inputFile.open( filename.c_str(), ios_base::in );

//open a stream for output file
outputfile = outputFileName;
ofstream outputFile;
outputFile.open(outputfile.c_str(), ios_base::out);

while(inputFile >> number)
{
    outputFile << number*100 << "\n"
    // do something

}

//close the input file stream
inputFile.close();

//close output file stream
outputFile.close();
}
