#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

int main()
{
    std::ofstream writeToFile;
    std::ifstream readFromFile;

    // ios::app     : Append to the end of file
    // ios::trunc   : If file exist delete content
    // ios::in      : Open file for reading
    // ios::out     : Open file to writing
    // ios::ate     : Open for writing and move to end of the file

    writeToFile.open("textfile.txt", std::ios::out);

    if (writeToFile.is_open())
    {
        writeToFile << "Welcome to the file\n";
        std::cout << "Enter data: ";
        std::string data;
        getline(std::cin, data);
        writeToFile << data;
        writeToFile.close();
    }

    std::vector<std::string> vect;
    readFromFile.open("textfile.txt", std::ios::in);

    if (readFromFile.is_open())
    {
        while (readFromFile.good())
        {
            std::string data;
            getline(readFromFile, data, ' ');
            std::cout << data << std::endl;
        }
        readFromFile.close();
    }
}