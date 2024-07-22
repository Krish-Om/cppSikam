#include <iostream>

using namespace std;

class A{
    public:
    void sayHelloA(){
        cout << "Base class A " << endl;
    }
};

//simple or single inheritance
class B : public A{
    public:
        void sayHelloB(){
            cout <<"Class B" <<endl;
        }
};

int main(){
    B b;
    b.sayHelloA();
    b.sayHelloB();
return 0;
}