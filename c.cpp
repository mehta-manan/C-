#include <fstream>
#include <iostream>

int main()
{
    std::fstream file;

    file.open("TextFile.txt", std::ios::out);

    if (!file)
        std::cout << "Error: Unable to open file";

    // Writing to text file
    else
        file << "Hello, World!";
    

    file.close();

    file.open("TextFile.txt", std::ios::in);

    if (!file)
        std::cout << "Error: Unable to open file";

    // Reading from text file
    else
    {
        std::string data;
        std::getline(file, data);
        std::cout << data;
    }
    
    file.close();
}