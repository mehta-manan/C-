#include<iostream>

class Base_Class{
public:
    void method() { std::cout << "Base Class\n"; }
    virtual void base_virtual_method_not_defined_in_derived() { std::cout << "Base virtual method not defined in derived\n"; }   
    virtual void virtual_method() { std::cout << "Base virtual method\n"; } 
};

class Derived_Class : public Base_Class{
    public:
    void method() { std::cout << "Derived Class\n"; }
    void Derived_Class_method() { std::cout << "Derived Class method\n"; }
    virtual void virtual_method() override { std::cout << "Derived virtual method\n"; }
};

int main(){
    
    // Derived_Class derived_class;
    // Base_Class *base_to_derived = &derived_class;
    
    Base_Class *base_class = new Base_Class();
    Base_Class *base_to_derived = new Derived_Class();

    base_class->method();
    base_to_derived->method();

    // base_class->Derived_Class_method();
    // base_to_derived->Derived_Class_method();

    base_class->base_virtual_method_not_defined_in_derived();
    base_to_derived->base_virtual_method_not_defined_in_derived();

    base_class->virtual_method();
    base_to_derived->virtual_method();

    delete base_class;
    delete base_to_derived;
}