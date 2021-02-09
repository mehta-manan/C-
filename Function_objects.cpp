#include <iostream>

int main()
{
    // Function objects / Functors : Function wrapped inside a class so that it's available like an object.
    // Functors are objects that can be treated as though they are a function or function pointer.
    // Benefits of functors:
    // 1. Smart function: capabilities beyond operator(). It can remember state.
    // 2. It can have its own type.

    class Functor
    {
    public:
        void operator()(std::string str)
        {
            std::cout << "Hii " + str << std::endl;
        }
    };

    Functor functor;
    functor("people");

    class Functor2
    {
        std::string myString;

    public:
        Functor2(std::string str) : myString(str) {}

        std::string operator()(std::string str)
        {

            return myString + str;
        }
    };

    std::string newString = Functor2("Hii ")("people");
    std::cout << newString;

    return 0;
}