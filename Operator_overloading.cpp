#include <iostream>
#include <sstream>

class Box
{
    double length, breadth, width;

public:
    Box ()
    {
        length = 0;
        breadth = 0;
        width = 0;
    }

    Box &operator++()
    {
        length++;
        breadth++;
        width++;
        return *this;
    }

    operator const char* ()
    {
        std::stringstream boxStream;
        boxStream << length << ","
                  << breadth << ","
                  << width;
        std::string boxString;
        boxString = boxStream.str();
        return boxString.c_str();
    }

    void get_data()
    {
        std::cout << length << std::endl
                  << breadth << std::endl
                  << width << std::endl;
    }
};

int main()
{
    Box box;
    box.get_data();
    const char *p = box;
    for (int i = 0; i < 10; i++)
        std::cout << box[i] << "\n";
    ++box;
    box.get_data();
    return 0;
}