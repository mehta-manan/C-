#include <iostream>
#include <exception>

class MyException : public std::exception
{
public:
    const char *what() const throw() override
    {
        return "My Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException me)
    {
        std::cout << me.what();
    }
    return 0;
}