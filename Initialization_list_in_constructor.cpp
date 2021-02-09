#include <iostream>

class SampleClass
{
    int x;
    int y;

public:
    // Initialization occurs in sequence in which fields are declared and hence field declared after some other field should not be initialized first; it will have garbage value.
    // No error is thrown at compile time and run time.
    // Garbage : SampleClass(int i, int j) : y(i), x(j + y)
    // Works fine as x value is not used in initializtion of y: SampleClass(int i, int j) : y(i), x(j)
    SampleClass(int i, int j) : x(i), y(j)
    {
        std::cout << "x: " << x << std::endl
                  << "y: " << y << std::endl;
    }
};

int main()
{
    SampleClass sampleObject(5, 10);
    return 0;
}