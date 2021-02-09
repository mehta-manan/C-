#include <iostream>
/*namespace af
{
    int x =9;
}*/
/*void f(int a[])

    {
        a[0] = 10;
    }*/

class Sampleclass
{
    int a;
    public:
    Sampleclass(std::string str)
    {

    }
};
int main()
{
    Sampleclass inst1();
    Sampleclass inst2 = Sampleclass("hello");
    Sampleclass* inst3 = new Sampleclass("hello");

    int a =10,b =10 , c=10;
    if((a==b)==c)
    std::cout << a;

    int x(60);


    //Range based for loop
    /*int arr[5] = {10,20,30,40,50};


    class A
    {
        public:
        static int f()
        {
            std::cout << "Hello";
        }
    } ;

    A::f();std::cout << af::x;*/
  /*
    int m ='g';
    char m2 = 45;
    std::cout << m;
     std::cout << m2;
    int ax[5]= {1,2,3,4,5};
    f(ax);
    std::cout << ax[0]; //10
*/
    return 0;
}
