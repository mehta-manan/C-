#include<iostream>

template <typename T>
void Hello(T a)
{
    std::cout << "Hello 1: " << a << std::endl;
}

template <typename T>
void Hello(T a, T b)
{
   std::cout << "Hello 2: " << a << ", " << b <<std::endl; 
}

int main()
{
    Hello(1);
    Hello(1, 10);
}