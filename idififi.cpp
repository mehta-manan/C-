#include <iostream>
#include <algorithm>

int main()
{
    std::string s = "abc";

    // do
    // {
    //     std::cout << s << " ";

    // } while (std::next_permutation(s.begin(), s.end()));

    std::cout << std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;
    std::cout << std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;
    std::cout << std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;
    std::cout << std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;
    std::cout << std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;


    
    std::cout << s;
}