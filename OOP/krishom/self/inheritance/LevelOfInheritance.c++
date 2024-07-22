#include <iostream>

using namespace std;

class A{
    public:
    void sayHelloA(){
        cout << "Base class A " << endl;
    }
};

//simple or single inheritance
class U{

};
class B :public U{
    public:
        void sayHelloB(){
            cout <<"Class B" <<endl;
        }
};


class C : public A,public B{ //Multiple Inheritance

};
int main(){
    B b;
    // b.sayHelloA();
    b.sayHelloB();

    C c;
    c.sayHelloB();
    c.sayHelloA();
return 0;
}