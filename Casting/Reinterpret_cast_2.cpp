#include <iostream>

class A
{
public:
    int a;
    int b;
    char c;
    bool d;
};

int main()
{
    A a = {1, 2, 'm', true};

    int *int_ptr = reinterpret_cast<int *>(&a);
    std::cout << *int_ptr << std::endl;
    int_ptr++;
    std::cout << *int_ptr << std::endl;
    int_ptr++;

    char *char_ptr = reinterpret_cast<char *>(int_ptr);
    std::cout << *char_ptr << std::endl;
    char_ptr++;

    bool *bool_ptr = reinterpret_cast<bool *>(char_ptr);
    std::cout << std::boolalpha << *bool_ptr << std::endl;

    A *a2 = new A();
    a2->a = 0;
    a2->b = 9;
    a2->c = 'q';
    a2->d = false;

    int *int_ptr2 = reinterpret_cast<int *>(a2);
    std::cout << *int_ptr2 << std::endl;
    int_ptr2++;
    std::cout << *int_ptr2 << std::endl;
    int_ptr2++;

    char *char_ptr2 = reinterpret_cast<char *>(int_ptr2);
    std::cout << *char_ptr2 << std::endl;
    char_ptr2++;

    bool *bool_ptr2 = reinterpret_cast<bool *>(char_ptr2);
    std::cout << std::boolalpha << *bool_ptr2 << std::endl;
}