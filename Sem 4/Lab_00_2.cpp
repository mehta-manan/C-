#include <iostream>
#include <cstdlib>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        std::cout << 1 + (rand() % 6);

        if (i % 5 == 0)
            std::cout << std::endl;
    }
}