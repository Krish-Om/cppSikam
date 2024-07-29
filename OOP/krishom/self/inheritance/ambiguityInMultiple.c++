#include <iostream>

using namespace std;

class Base {
        int a;
    public:
        Base(){
            cout<< "Constructor Base called " << endl;
        }
        void foo(){
            cout<< "Base " << endl;
        }
};
class Derived1 : public Base{
    public:
        void foo(){
            cout << "Derived1";
        }
};
class Derived2: public Base{
    public:
        void foo(){
            cout << "Derived 2";
        }
};

class FinalDervied : public Derived1, public Derived2
{
};

int main(){

    //Ambiguity  : having data members and member function with same name

    //solution 1
    FinalDervied obj;
    // obj.foo();// this will give error
    
    //resolved using scope resolution operator (::)
    // obj.Derived1 :: foo(); //calls Derive1 func
    obj.Derived2 :: foo();//calls Derived2 func    
return 0;
}