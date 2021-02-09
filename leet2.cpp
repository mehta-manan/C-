#include <iostream>
#include <cmath>
#include <vector>
int reverse(int x)
{

    int num = x;
    int sum = 0;
    num = abs(x);
    while (num != 0)
    {
        int rem = num % 10;
        try
        {
            sum = rem + (sum * 10);
        }
        catch (std::exception &e)
        {
            return 0;
        }
        num = num / 10;
    }
    if (x < 0)
        return -sum;
    else
        return sum;
}

int main()
{
    std::cout << reverse(
        67545466);
    std::vector<int> v;
    v.insert(v.begin(), 1);
}