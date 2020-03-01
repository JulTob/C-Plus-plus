#include <algorithm>   // for std::copy
#include <cstdlib>     // for EXIT_FAILURE
#include <fstream>     // for std::filebuf
#include <iterator>    // for std::{i,o}streambuf_iterator

int main(int argc, char *argv[])
{
    if (argc != 3) { return EXIT_FAILURE; }

    std::filebuf infile, outfile;
    infile.open(argv[1], std::ios::in | std::ios::binary);
    outfile.open(argv[2], std::ios::out | std::ios::binary);

    std::copy(std::istreambuf_iterator<char>(&infile), {},
              std::ostreambuf_iterator<char>(&outfile));
}
