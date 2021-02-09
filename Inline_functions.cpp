#include <iostream>
//  When the program executes the function call instruction
// 1. CPU stores the memory address of the instruction following the function call,
// 2. copies the arguments of the function on the stack and finally
// 3. transfers control to the specified function.
// 4. The CPU then executes the function code,
// 5. stores the function return value in a predefined memory location/register and
// 6. returns control to the calling function.

// This can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee).
// For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run.
// However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code.
// This overhead occurs for small functions because execution time of small function is less than the switching time.

// C++ provides an inline functions to reduce the function call overhead.
// Inline function is a function that is expanded in line when it is called.
// When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.
// This substitution is performed by the C++ compiler at compile time.
// Inline function may increase efficiency if it is small.

// inline is a request and hence can be rejected by compiler as per it's convenience.
inline void MyFunction()
{
    std::cout << "Hello world";
}

int main()
{
    MyFunction();
    return 0;
}