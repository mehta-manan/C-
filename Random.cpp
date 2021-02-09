#include <iostream>
#include <ctime>
#include <numeric>

int main()
{
    // srand() - Generate new seed for rand()  function.
    // Takes unsigned int as argument as seed number.
    // Default value is 1.

    // time() - Get current time
    // time_t time (time_t* timer);
    // Takes a pointer to a time_t object that time will fill up with the current time (and the return value is the same one that you pointed to).
    // If NULL is passed, it returns a new time_t object that represents the current time.
    srand(time(NULL));
    // Every time this code is run, a new seed is generated by current time.

    int random_num = rand() % 11; // random_num value is always < 11.

    std::cout << random_num << std::endl;

    // Generate random number in range [min, max]
    int min = 5;
    int max = 7;
    random_num = min + (rand() % ((max + 1) - min));
    
    std::cout << random_num << std::endl;

    return 0;
}