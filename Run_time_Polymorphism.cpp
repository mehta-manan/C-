#include<iostream>

class base_class
{
	public:
	
		base_class() 
		{
			std::cout << "This is base class default constructor." << std::endl;
		}

		base_class(int x) : base_class()
		{
			std::cout << "This is base class paramatersied constructor " << x << std::endl;
		}

		base_class(int x, int y) : base_class(x)
		{
			std::cout << "This is base class paramatersied constructor 2. " << x << " " << y << std::endl;
		}
};


class derived_class : public base_class
{
	public:
        int num = 0;
        derived_class() : base_class()
		{
			std::cout << "This is derived class default constructor." << std::endl;
		}
		derived_class(int z) : base_class()
		{
			std::cout << "This is derived class paramataerised constructor." << std::endl;
		}
};

int main()
{
    base_class *dc = new derived_class();
    // dc->num = 10; // class "base_class" has no member "num"
}