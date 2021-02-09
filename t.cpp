#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> vect;
    int testCase;
    std::cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        std::string val;
        std::cin >> val;
        vect.push_back(val);
    }

    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << std::endl;
    }
    return 0;
}
