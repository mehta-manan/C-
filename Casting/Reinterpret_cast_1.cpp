#include <iostream>

class A
{
public:
    void methodA()
    {
        std::cout << "method A called" << std::endl;
    }
};

class B
{
public:
    void methodB()
    {
        std::cout << "method B called" << std::endl;
    }
};

int main()
{
    A *a = new A();
    a->methodA();
    B *b = reinterpret_cast<B *>(a);
    b->methodB(); 
}