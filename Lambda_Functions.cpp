#include <iostream>

int main()
{
    // Syntax:
    // auto someVar = [] (int a, int b) -> int
    // {
    //     Body of function
    //     return 0;
    // };

    // auto someVar is like a function pointer, where its type is auto.
    // [] is Capture list( or Closure), the local variables we want to be able to use within the body of the function.
    // (int a, int b) is parameter list for Lambda function.
    // -> optional pointer to return when it's obvious.
    //  int is the return value. Optional with ->

    // auto sayHelloWorld = []() {
    //     std::cout << "Hello World" << std::endl;
    // };

    // sayHelloWorld();

    // auto sayHelloWorld = [](int a, int b) {
    //     std::cout << "Hello World" << std::endl
    //               << a << " " << b << std::endl;
    // };

    // sayHelloWorld(10,20);

    // auto sum = [](int a, int b) {
    //     return a + b;
    // };

    // std::cout << sum(10,20) << std::endl;

    // auto sum = [](int a, int b) -> int{
    //     return a + b;
    // };

    // std::cout << sum(10,20) << std::endl;

    // Capture list
    // By default, we cant use any outside variables inside the body of Lambda.
    // But that's exactly what capture is for!
    // We can capture specific variables by supplying their names in comma separted list.
    //
    // [myVariable, someOtherVariable] this is call by value.
    // [&myVariable, &someOtherVariable] this is call by reference.

    // int i = 10;
    // auto sum = [](int a, int b) {
    //     return a + b + i; // Error: An enclosing-function local variable cannot be referenced in a lambda body unless it is in the capture list
    // };

    // std::cout << sum(10,20) << std::endl;

    // int i = 10;
    // auto sum = [i](int a, int b) {
    //     return a + b + i;
    // };

    // std::cout << sum(10,20) << std::endl;

    // int i = 10;
    // int g = 20;
    // auto sum = [i, g](int a, int b) {
    //     return a + b + i + g; // Error: An enclosing-function local variable cannot be referenced in a lambda body unless it is in the capture list
    // };

    // std::cout << sum(10, 20) << std::endl;

    // int i = 10;
    // auto sum = [i](int a, int b) {
    //     // i is read only when called by value.
    //     i = 0; // Error : expression must be a modifiable lvalue
    //     return a + b + i;
    // };

    // std::cout << sum(10,20) << std::endl;

    // int i = 10;
    // auto sum = [&i](int a, int b) {
    //     // i is writeable only when called by reference.
    //     i = 0;
    //     return a + b + i;
    // };
    // std::cout << sum(10,20) << std::endl;
    // std::cout << i;

    // Catch all variables outside the lambda body. (By value)
    // int i = 10;
    // auto sum = [=](int a, int b) {
    //     return a + b + i;
    // };
    // std::cout << sum(10,20) << std::endl;

    // Catch all variables outside the lambda body. (By reference)
    // int i = 10;
    // auto sum = [&](int a, int b) {
    //     i = 0;
    //     return a + b + i;
    // };
    // std::cout << sum(10,20) << std::endl;
    // std::cout << i;

    // Catch all variables outside the lambda body by reference and i by value
    // int i = 10;
    // int j = 20;
    // auto sum = [&, i](int a, int b) {
    //     j = 0;
    //     return a + b + i;
    // };
    // std::cout << sum(10,20) << std::endl;

    // Catch all variables outside the lambda body by value and i by reference
    // int i = 10;
    // auto sum = [=, &i](int a, int b) {
    //     i = 0;
    //     return a + b + i;
    // };
    // std::cout << sum(10, 20) << std::endl;

    [](int a, int b) {
        
        return a + b;
    };
    std::cout << (20, 10) << std::endl;

    return 0;
}