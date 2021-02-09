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

void ThrowExcepetion()
{
    MyException myException;
    throw myException;
}
int main()
{
    // const char *p = "Hello world";
    // const char * p2 = p;
    // while((*p2) != '\0')
    // {
    //     printf("%c",*p2);
    //     p2++;
    // }
    // std::cout << p;
    // to_string(int);
    try
    {
        ThrowExcepetion();
    }
    catch (MyException me)
    {
        std::cout << me.what();
    }
    return 0;
}