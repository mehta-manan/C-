#include <iostream>

/* 
argc
(argument count)  argc : int 
number of command line arguments (including program name)
range - [1,inf)
*/

/*
argc
(argument vector) argv : char** | argv[] : char* 
array of arguments
size - [1,inf)
argv[0] to argv[argc - 1] are pointers to strings
argv[0] - name of program
argv[1] to argv[argc - 1] - CLI arguments
*/

int main(int argc, char *argv[])
{
    std::cout << "Number of arguments passed: " << argc << std::endl;
    std::cout << "Arguments passed: " << std::endl;

    for (int i = 0; i < argc; i++)
        std::cout << argv[i] << " " << std::endl;
}

/*
PS C:\Users\Manan\Desktop\CPlusPlus> g++ CLI_arguments.cpp
PS C:\Users\Manan\Desktop\CPlusPlus> .\a.exe Hello world! 
Number of arguments passed: 3
Arguments passed:
C:\Users\Manan\Desktop\CPlusPlus\a.exe
Hello
world!
*/

/*
PS C:\Users\Manan\Desktop\CPlusPlus> g++ CLI_arguments.cpp
PS C:\Users\Manan\Desktop\CPlusPlus> .\a.exe "Hello world!"
Number of arguments passed: 2
Arguments passed:
C:\Users\Manan\Desktop\CPlusPlus\a.exe
Hello world!
*/