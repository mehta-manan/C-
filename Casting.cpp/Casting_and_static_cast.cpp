#include <iostream>

class My_Integer
{
private:
    int integer;

public:
    My_Integer(int value) : integer(value)
    {
        std::cout << "Conversion Constructor" << std::endl;
    }

    operator std::string()
    {
        std::cout << "Conversion Operator" << std::endl;
        return std::to_string(integer);
    }
};

// ----------------------------------------------------

class A
{
};

class B : private A
{
};

int main()
{
    // C style cast

    //int to double implicit
    int a = 5;
    double b = a;

    // double to int implicit
    double c = 5.25;
    int d = c;

    // double to int explicit - safe style cast
    double e = 5.56;
    int f = (int)e + 5.67;

    // -----------------------------------------------------------------------------------------

    // C++ style cast

    double g = 3.89;
    int h = static_cast<int>(g) + 5.67;

    // ----------------------------------------------------

    // 1. static_cast<type>(expression)
    char my_char = 'a';
    // C style no type compatibility checking
    int *int_ptr = (int *)&my_char;
    *int_ptr = 10; // run-time error
    // C++ static cast
    //int *int_ptr_2 = static_cast<int *>(&my_char); // compile error: invalid type conversion

    // ----------------------------------------------------

    My_Integer my_integer(5);
    my_integer = 10;                          // Conversion ctor called
    my_integer = static_cast<My_Integer>(10); // alternative way

    std::string str = my_integer;               // Conversion operator called
    str = static_cast<std::string>(my_integer); // alternative way

    // ----------------------------------------------------

    // Converting to and from void*
    int i = 20;
    void *void_ptr = static_cast<void *>(&i);
    int *int_ptr_ = static_cast<int *>(void_ptr);

    // ----------------------------------------------------

    B base;
    A *a_ptr = (A *)(&base);              // legal
    // A *a_ptr_2 = static_cast<A *>(&base); // error: conversion to inaccessible base class "A" is not allowed ... works only with public inheritance
}