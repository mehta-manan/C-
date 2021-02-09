#include <iostream>

class SampleClass
{
    int x;
    int y;

public:
    SampleClass()
    {
    }

    SampleClass(int a, int b)
    {
        x = a;
        y = b;
    }

    void getData()
    {
        std::cout << "x = " << x << std::endl
                  << "y = " << y << std::endl;
    }

    // Assignment operator(=) overloading
    SampleClass &operator=(const SampleClass &sampleClass)
    {
        std::cout << "-----Overloaded assignment operator-----" << std::endl;
        x = sampleClass.x;
        y = sampleClass.y;
        return *this;
    }

    // new operator overloading
    void *operator new(std::size_t SampleClassSize)
    {
        std::cout << "-----Overloaded new operator----- | Size: " << SampleClassSize << std::endl;
        return ::operator new(SampleClassSize);
    }

    // new[] operator overloading
    void *operator new[](std::size_t SampleClassSize)
    {
        std::cout << "-----Overloaded new[] operator----- | Size: " << SampleClassSize << std::endl;
        return ::operator new(SampleClassSize);
    }

    // delete operator overloading
    void operator delete(void *sampleClass)
    {
        std::cout << "-----Overloaded delete operator-----" << std::endl;
        ::operator delete(sampleClass);
    }

    // delete[] operator overloading
    void operator delete[](void *sampleClass)
    {
        std::cout << "-----Overloaded delete[] operator-----" << std::endl;
        ::operator delete(sampleClass);
    }
};

int main()
{
    SampleClass obj1(10, 20);
    SampleClass obj2;

    // Using overloaded assignment operator
    obj2 = obj1;

    obj2.getData();

    // Using overloaded new operator
    SampleClass *sampleClass = new SampleClass(11, 22);

    sampleClass->getData();

    // Using overloaded delete operator
    delete sampleClass;

    // Using overloaded new[] operator
    SampleClass *sampleClass1 = new SampleClass[10];

    // Using overloaded delete[] operator
    delete[] sampleClass1;

    // Output:
    // -----Overloaded assignment operator-----
    // x = 10
    // y = 20
    // -----Overloaded new operator----- Size: 8
    // x = 11
    // y = 22
    // -----Overloaded delete operator-----
    // -----Overloaded new[] operator----- Size: 80
    // -----Overloaded delete[] operator-----
}