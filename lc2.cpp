#include <string>
#include <iostream>
using std::string;

// class Solution {
// public:
//     int strStr(string haystack, string needle)
//     {
//         if (haystack.size() < needle.size())
//             return -1;
//         int keepIndex = -1;

//         if (haystack == "" && needle == "")
//             return 0;

//         else if(haystack == needle)
//             return 0;

//         else if (haystack == "" && !needle.empty())
//             return keepIndex;

//         else if (!haystack.empty() && needle == "")
//             return 0;

//         for (int i = 0; i < haystack.size(); i++)
//         {
//             if (haystack[i] == needle[0])
//             {

//                 int temp = keepIndex = i;
//                 int j;
//                 for (j = 0; j < needle.size(); j++)
//                 {
//                     if (needle[j] != haystack[temp])
//                         break;
//                     temp++;
//                 }

//                 if (j == needle.size()){
//                     return keepIndex;
//                 }
//             }
//         }
//         return keepIndex;
//     }
// };

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if ((haystack == "" && needle == "") || (haystack == needle) || (!haystack.empty() && needle == ""))
            return 0;

        else if (haystack == "" && !needle.empty())
            return -1;

        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0] && (needle == haystack.substr(i, needle.size())))
                return i;
        }
        return -1;
    }
};

int main()
{
    string haystack = "mississippi";
    string needle = "issi";
    Solution sol;
    std::cout << sol.strStr(haystack, needle);
}