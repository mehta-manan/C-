#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base Class constructor" << std::endl;
    }

    ~Base()
    {
        std::cout << "Base Class destructor" << std::endl;
    }
};

class Derived : Base
{
public:
    // Derived(int x) - Implicitly call base class constructor.
    Derived(int x) : Base() // Explicitly call base class constructor
    // constructor delegation
    {
        std::cout << "Derived Class parameterised constructor" << std::endl;
    }

    ~Derived()
    {
        std::cout << "Derived Class destructor" << std::endl;
    }
};
int main()
{
    Derived derived(2);
    return 0;
}