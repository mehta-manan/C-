#include <iostream>

int main()
{
    int row, col;
    std::cout << "Enter row: ";
    std::cin >> row;
    std::cout << "Enter column: ";
    std::cin >> col;

    // Allocating memory
    int **dynamic_2d_array = new int *[row];

    for (int i = 0; i < row; i++)
        dynamic_2d_array[i] = new int[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            std::cin >> dynamic_2d_array[i][j];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            std::cout << dynamic_2d_array[i][j];

        std::cout << std::endl;
    }

    // Deallocating memory
    for (int i = 0; i < row; i++)
        delete[] dynamic_2d_array[i];

    delete[] dynamic_2d_array;
}

/*class sampleClass
{
    int a;
    int b;

    public:
    void setData(int,int);
    void get(int);
    void get();
    int add();
    void swap();
};

void sampleClass::setData(int x, int y)
{
    a = x;
    b = y;
}

void sampleClass::get(int x)
{
    std::cout << a << " " << b << std::endl;
}

int sampleClass::add()
{
    return a + b;
}

void sampleClass::swap()
{
    a = a + b;
    b = a - b;
    a = a - b;
}


void sampleClass::get()
{
    std::cout << "a:" << a << " " << "b:" << b << std::endl;
}
*/
/*sampleClass sampleInst;
    sampleInst.setData(5,10);
    std::cout << sampleInst.add() << std::endl;
    sampleInst.swap();
    sampleInst.get(1);
    sampleInst.get();*/

/*
void callByValue(int x)
{
    x = 10;
}
void callByReference(int& x)
{
    x = 20;
}
void callByPointer(int* x)
{
    *x = 30;
}
int var = 0;
    std::cout << " var: " << var << std::endl; //  var: 0

    callByValue(var);
    std::cout << " var: " << var << std::endl; //  var: 0

    callByReference(var);
    std::cout << " var: " << var << std::endl; // var: 20

    callByPointer(&var);
    std::cout << " var: " << var << std::endl; // var: 30





class Sample_class
{
    public:
    void method();
};

inline void Sample_class::method()
{
    std::cout << "helo";
} 


     Sample_class s;
    s.method();

 // Dynamic allocation of new node:
    node *ptr = new node;
    // struct node* ptr = (struct node*) malloc(sizeof(ptr));

    ptr->data = 10;

    // Deallocating memory of new node:
    delete ptr;
    // free(ptr);

    return 0;


struct node
{
    int data;
    struct node *ptr;
};
 #include <iostream>

int main()
{
    int *dynamic_array_1 = new int[5]{1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        std::cout << dynamic_array_1[i] << " ";
    }
    // or
    int *dynamic_array_2 // or int *dynamic_array_2 =
        {
            new int[5]{10, 20, 30, 40, 50}
        };

    delete[] dynamic_array_1;
    delete[] dynamic_array_2;


    int row;
    std::cout << "Enter row: ";
    std::cin >> row;
 
    int *dynamic_array_3 = new int[row];
 
    for (int i = 0; i < row; i++)
    {
        std::cout << "Enter element " << i << ":";
        std::cin >> dynamic_array_3[i];
    }
    for (int i = 0; i < row; i++)
        std::cout << dynamic_array_3[i] << " ";
 
    delete[] dynamic_array_1;
    delete[] dynamic_array_2;
    delete[] dynamic_array_3;
}
*/
// int main()
// {
//     // int row = 5;
//     // int **dynamic_2d_array
//     // {
//     //     new int[3] {1,2,3};
//     //     new int[3] {4,5,6};
//     // };

// }