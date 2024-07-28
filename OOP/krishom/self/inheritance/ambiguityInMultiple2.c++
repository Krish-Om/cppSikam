#include <iostream>

using namespace std;

class Base {
    public:
        int a;
};
class Derived1 : virtual public Base{// just adding virtual solves the issue of ambiguity

};
class Derived2: virtual public Base{ // just adding virtual solves the issue of ambiguity

};

class FinalDervied : public Derived1, public Derived2
{
};

int main(){

    //Solution 2 : Using virtual base class
    // this ensures that the base class is inherited only once throughout 
    // the inheritance hierarchy

    FinalDervied d;
    // d.a;    // this give create uncertainity for compiler if we don't 
    //create virtual base class


    d.a; // this ensures there is only one data member a in FinalDerived class

return 0;
}