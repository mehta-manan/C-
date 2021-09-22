#include <iostream>
#include <typeinfo>
#include <typeindex>

int main()
{
    int var;

    std::cout << typeid(var).name() << std::endl;

    // typeid() is a operator
    const std::type_info &var_info = typeid(var);

    std::cout << var_info.hash_code() << std::endl
              << var_info.name() << std::endl;

    // type_index is a wrapper class around type_info
    std::cout << std::type_index(var_info).hash_code() << std::endl
              << std::type_index(var_info).name();

    // more info at cppreference.com
}