#include <iostream>
using namespace std;

class Example {
private:
    int x;
    int y;

public:
    Example() 
     {
        cout << "Default constructor called" << endl;
    }
    Example(int a, int b)
    {
        x=a;
        y=b;      

        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        cout << "Parameterized constructor called" << endl;  
    }
    Example(Example &other) 
    {
        x=other.x;
        y=other.y;
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};
int main() {

    Example obj1;

    Example obj2(10, 20);
     obj2.display();

    Example obj3 = obj2;
    obj3.display();

    return 0;
}
