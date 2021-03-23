#include <iostream>

int func(int *ptr)
{
    return ++(*ptr);
}

int main()
{
    const int *int_ptr = new int(10);
    std::cout << "*int_ptr: " << *int_ptr << std::endl;

    // error: (*int_ptr)++;

    int *int_ptr_2 = const_cast<int *>(int_ptr);
    std::cout << "*int_ptr_2: " << *int_ptr_2 << std::endl;

    (*int_ptr_2)++;
    std::cout << "*int_ptr: " << *int_ptr << " == *int_ptr_2: " << *int_ptr_2 << std::endl;

    // --------------------------------------------------------

    const int a = 20;
    const int *int_ptr_3 = &a;
    int *int_ptr_4 = const_cast<int *>(int_ptr_3);

    // --------------------------------------------------------

    const int *int_ptr_5 = new int(30);
    std::cout << "func(): " << func(const_cast<int *>(int_ptr_5));
}