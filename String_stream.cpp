#include <iostream>
#include <sstream>

int main()
{
    // a sample string
    std::string sentence = "This is a collection of words";

    // stringstream object
    std::stringstream ss;

    // stores strings separated by space
    ss << sentence << " " << 3.05;

    // convert stringstream to string
    std::cout << ss.str() << std::endl;

    // a buffer to hold each string separated by space
    std::string buffer;

    // emits each string as soon as space is found
    // does work similar to getline(ss, buffer, ' ') function
    while (ss >> buffer) // or while(getline(ss, buffer,' '))
    {
        // send extracted string to console
        std::cout << buffer << " ";
    }
}