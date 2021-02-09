#include <cstdlib>
#include <cstdio>
#include <iostream>

int main()
{
    unsigned int seed;
    std::cout << "Enter seed: ";
    std::cin >> seed;
    srand(seed);

    for (int i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
            std::cout << std::endl;
    }
}