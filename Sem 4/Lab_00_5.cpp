#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>

int main()
{
    srand(time(NULL));
    for (int i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
            std::cout << std::endl;
    }
}