#include <iostream>
#include <typeinfo>

// class template
template <class T>
class Template
{
    T t;

public:
    Template()
    {
        std::cout << typeid(t).name() << std::endl;
    }
};

// class template-specialization
template <>
class Template<char>
{
    char t;

public:
    Template()
    {
        std::cout << typeid(t).name() << std::endl;
    }
};

int main()
{
    Template<int> t1;  //i
    Template<char> t2; //c
}