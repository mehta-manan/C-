#include <iostream>

class Base
{
public:
    void OverloadedFunction()
    {
        std::cout << "Base Overloaded Function. Signature: ()" << std::endl;
    }

    void OverloadedFunction(int parameter)
    {
        std::cout << "Base Overloaded Function. Signature: (int)" << std::endl;
    }

    void virtual OverriddenFunction()
    {
        std::cout << "Base Overridden Function." << std::endl;
    }
};

class Derived : public Base
{
public:
    void D_OverloadedFunction()
    {
        std::cout << "Derived Overloaded Function. Signature: ()" << std::endl;
    }
    void D_OverloadedFunction(int parameter)
    {
        std::cout << "Derived Overloaded Function. Signature: (int)" << std::endl;
    }

    void OverriddenFunction()
    {
        std::cout << "Derived Overridden Function." << std::endl;
    }
};

int main(void)
{
    Base base;
    base.OverloadedFunction();
    base.OverloadedFunction(1);
    base.OverriddenFunction();

    Derived derived;
    derived.D_OverloadedFunction();
    derived.D_OverloadedFunction(1);
    derived.OverriddenFunction();

    Base &baseRef = derived;
    baseRef.OverriddenFunction();
}