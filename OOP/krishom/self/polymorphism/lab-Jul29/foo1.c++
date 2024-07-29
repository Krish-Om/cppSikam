#include <iostream>

using namespace std;

class A
{

public:
    virtual void display()// indicates the compiler to do the late binding during runtime rather than compile time
    {
        cout << "Hello I am class A"<< endl;
    }
};

class B : public A
{
public:
    void display() 
    {
        cout << "Hello! I am class B " << endl;
    }
};

int main()
{
    // // A *pa;

    A* pa;
    A a;
    pa = &a;
    pa->display();



    B b;
    pa = &b;
    pa->display();

    // B* pb;
    // B b;
    // pb= &b;
    // pb->display();
    // b.display();
    return 0;
}
