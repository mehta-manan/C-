#include <iostream>
#include <vector>
using namespace std;

vector<int> check(vector<int> &digits)
{

    if (digits[digits.size() - 1] == 9)
    {
        digits[digits.size() - 1] = 0;
        vector<int> d = digits;
        d.pop_back();
        if (d.size() == 1 && d[0] == 9)
        {
            d.insert(d.begin(), 1);
            return d;
        }

        vector<int> newv = check(d);
        newv.insert(newv.begin(), digits.begin(), digits.end());
        return newv;
    }
    else
    {
        digits[digits.size() - 1]++;
        return digits;
    }
}

vector<int> plusOne(vector<int> &digits)
{
    return check(digits);
}



int main()
{
    vector<int> v{1,9};
    vector<int> nv = plusOne(v);
    for(auto i : nv)
    {
        cout << i << "\n";
    }
}