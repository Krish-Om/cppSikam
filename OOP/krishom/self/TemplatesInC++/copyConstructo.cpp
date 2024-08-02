#include <iostream>

using namespace std;

class Base {
    private:
        int a;
    public:
        Base(){}
        Base(Base& b){
            this->a =b.a;
        }
        Base(int n){a = n;}

        void display(){
            cout << this->a << endl;
        }
};


int main(){
    Base b(34);
    Base ch(b);

    ch.display();
return 0;
}