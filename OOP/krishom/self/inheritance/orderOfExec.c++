#include <iostream>

using namespace std;

class Base {
    public:
        Base(){
            cout << "Base class "<< endl;
        }
        ~Base(){
            cout << "Base class " << endl;
        }
};
class OtherClass{
    public:
        OtherClass(){
            cout << "Other class " << endl;
        }
        ~OtherClass(){
            cout << "Other Class " <<endl;
        }
};
class Derived:public Base,public OtherClass{
    public:
        Derived(){
            cout<< "Derived class " << endl;
        }
        ~Derived(){
            cout << "Dervied class " << endl;
        }
};



int main(){
    Derived d;
return 0;
}