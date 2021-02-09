#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    int numOfItems;
    std::vector<int> vect;
    string inputString;

    std::cin >> numOfItems;
    std::cin.ignore();
    getline(std::cin , inputString);

    std::stringstream sso;
    sso << inputString;

    for(int i = 0; i < numOfItems; i++){
        int num;
        sso >> num;
        vect.push_back(num);    
    }   
    
    std::sort(vect.begin(), vect.end());

    for(int i = 0; i < numOfItems; i++){
        std::cout << vect[i] << " ";
    } 
    return 0;
}
