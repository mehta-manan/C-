#include <iostream>

class MyClass
{
    int pvtData;

public:
    MyClass() : pvtData(100) {}
    friend int FriendOfMyClass(MyClass &);
};

int FriendOfMyClass(MyClass &myObj)
{
    return myObj.pvtData;
}

int main()
{
    MyClass myObject;
    std::cout << FriendOfMyClass(myObject);
    return 0;
}