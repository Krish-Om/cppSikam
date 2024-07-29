#include <iostream>

using namespace std;

class Parent {
    public:
        void print(){
            cout << "Parent class :: print()" << endl;
        }

        virtual void print1(){
            cout << "Parent class :: print1()" << endl;
        }
};

class Child : public Parent{
    public:
        void print(){
            cout << " Derived class :: print() " << endl; // hides the base class print() in compile time
            // Parent :: print();
        }
    
        void print1() override
        {
            cout << " Child class :: print1()" << endl;
        }
};


int main(){
    // Child ch;
    //compile time or early biniding
    // ch.print();
    // ch.print1();

    // //using child object to call parent's functions
    // ch.Parent :: print1();
    // ch.Parent :: print();

    // Runtime or latebiniding
    //In runtime it looks for what type of object's address is stored in the pointer variable.
    Parent* parent_ptr;
    Child child;

    parent_ptr = &child;

    parent_ptr->print();
return 0;
}