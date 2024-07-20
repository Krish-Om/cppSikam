#include <iostream>

using namespace std;

class Base
{
    int private_var;

protected:
    int protectecd_var;

    void messageFromProtected(){cout << "Hello from protected member function \n";}
public:
    int public_var;

    void displayFromPubliMode()
    {
        cout << "Hello, I am public member function " << endl;
    }
    Base(){}
    ~Base(){}
};

class publicChild : public Base{

};
class protectedChild : protected Base{
    public:
        void callProtectedMethodInBase(){
            messageFromProtected();
        }
};

class privateChild : private Base{

};
int main()
{

    publicChild pub;
    pub.displayFromPubliMode();
    cout << pub.public_var << endl;

    protectedChild prot;
    prot.callProtectedMethodInBase();

    privateChild privat;
    //givess error
    // privat.displayFromPubliMode();
    // privat.public_var


    return 0;
}