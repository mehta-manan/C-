#include <iostream>

int main()
{
    int denominator;
    std::cin >> denominator;
    
    try
    {
        if (denominator == 0)
            throw std::runtime_error("Division by 0");
        else
            std::cout << denominator / 10;
    }
    // only one catch is executed that matches the type of throw first
    catch (std::string str)
    {
        std::cout << str << std ::endl;
    }

    catch (const std::exception &e)
    {
        // std::cerr corresponds to C stream error.
        // Object of ostream class that represents the standard error stream oriented to narrow characters (of type char).
        std::cerr << e.what() << '\n';
    }
    // catch any type of error (irrelevant of type of throw message)
    catch (...)
    {
    }
    
    return 0;
}