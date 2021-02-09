// 1. Multi-level Inheritance
 
#include <iostream>
 
class BaseClass
{
public:
    BaseClass()
    {
        std::cout << "Base Class Constructor called." << std::endl;
    }
 
    ~BaseClass()
    {
        std::cout << "Base Class Destructor called." << std::endl;
    }
};
 
class DerivedClass : public BaseClass
{
public:
    DerivedClass()
    {
        std::cout << "Derived Class Constructor called." << std::endl;
    }
 
    ~DerivedClass()
    {
        std::cout << "Derived Class Destructor called." << std::endl;
    }
};
 
class SecondDerivedClass : public DerivedClass
{
public:
    SecondDerivedClass()
    {
        std::cout << "Second Derived Class Constructor called." << std::endl;
    }
 
    ~SecondDerivedClass()
    {
        std::cout << "Second Derived Class Destructor called." << std::endl;
    }
};
 
int main()
{
    SecondDerivedClass secondDerivedClass;
}
