#include <iostream>
#include <ctime>

/*
    Design and implement a class, PRNG that generates a sequence of (pseudo) random
    numbers in the manner just described. Your class should have at least three constructors:
    a default constructor that consumes no arguments, a second that consumes a single int
    representing the intitial seed, and a third that consumes four int inputs, for initial seed,
    multiplier, increment and modulus (in that order).
*/

class PRNG
{
private:
#pragma region fields
    int seed;
#pragma endregion fields

#pragma region private_methods
    void print_random_number();
    void print_random_number(int random_number);
#pragma endregion private_methods

public:
#pragma region public_methods
    PRNG();
    PRNG(int seed);
    PRNG(int seed, int multiplier, int increment, int modulus);
#pragma endregion public_methods
};

PRNG::PRNG()
{
    srand(time(NULL));
    print_random_number();
}

PRNG::PRNG(int seed)
{
    this->seed = seed;
    srand(seed);
    print_random_number();
}

PRNG::PRNG(int seed, int multiplier, int increment, int modulus)
{
    int random_number = (multiplier * seed + increment) % modulus;
    print_random_number(random_number);
}

void PRNG::print_random_number()
{
    std::cout << rand() << std::endl;
}

void PRNG::print_random_number(int random_number)
{
    std::cout << random_number << std::endl;
}

int main()
{
    PRNG prng;
    PRNG prng2(4);
    PRNG prng3(40, 1, 3641, 729);
}