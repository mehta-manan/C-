#include <fstream>
#include <iostream>

int main()
{
    int write = 10;
    int read;

    // Write to a binary file
    std::ofstream ofile;
    ofile.open("Binary.bin", std::ios::out | std::ios::binary);

    if (ofile.is_open())
    {
        ofile.write((char *)&write, sizeof(int));
        ofile.close();
    }
    else
        std::cout << "Failed to open." << std::endl;

    // Read from a binary file
    std::ifstream ifile;
    ifile.open("Binary.bin", std::ios::in | std::ios::binary);

    if(ifile.is_open())
    {
        ifile.read((char *)&read, sizeof(int));
        std::cout << read << std::endl;
        ifile.close();
    }
    else
        std::cout << "Failed to open." << std::endl;
    return 0;
}