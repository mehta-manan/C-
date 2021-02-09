#include <iostream>
class A
{
public:
    A()
    {
        std::cout << "Hello";
    }
};

class B : public A
{
public:
    B(int a) {}
};

int main()
{
    B b(10);
}