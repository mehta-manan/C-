#include <iostream>

class Base
{
public:
    Base() {}
    // dynamic_cast requires polymorphic classes
    virtual ~Base() {}
};

// class Derived : private Base
// error: conversion to inaccessible base class "Base" is not allowed
class Derived : public Base
{
public:
    Derived() {}
    ~Derived() {}
};

class AnotherDerived : public Base
{
public:
    AnotherDerived() {}
    ~AnotherDerived() {}
};

int main()
{
    Derived *derived = new Derived();

    // upcast - implicit
    Base *base = derived; // object slicing occurs

    // downcast - explicit
    Derived *d = dynamic_cast<Derived *>(base); // d == (some address)

    Derived *d2 = static_cast<Derived *>(base);

    AnotherDerived *ad = dynamic_cast<AnotherDerived *>(base); // ad == NULL

    AnotherDerived *ad2 = static_cast<AnotherDerived *>(base);

    if (d)
        std::cout << "d is not NULL" << std::endl;
    else
        std::cout << "d is NULL" << std::endl;

    if (d2)
        std::cout << "d2 is not NULL" << std::endl;
    else
        std::cout << "d2 is NULL" << std::endl;

    if (ad)
        std::cout << "ad is not NULL" << std::endl;
    else
        std::cout << "ad is NULL" << std::endl;

    if (ad2)
        std::cout << "ad2 is not NULL" << std::endl;
    else
        std::cout << "ad2 is NULL" << std::endl;
}

// Output:
// d is not NULL
// d2 is not NULL
// ad is NULL
// ad2 is not NULL