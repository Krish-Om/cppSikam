#include <iostream>
using namespace std;

class parent;
// forward definition
class anotherClass
{
public:
    void getData(parent &);
};

class parent
{
private:
    int private_var;

protected:
    int protected_var;

public:
    parent()
    {
        private_var = 49;
        protected_var = 56;
    }

    friend void anotherClass ::getData(parent &);
};

void anotherClass ::getData(parent &p)
{
    cout << "Private Variable : " << p.private_var << endl;
    cout << "Protected Variable : " << p.protected_var << endl;
}

int main()
{
    parent p;
    anotherClass a;


    cout << "Accessing private and protected variables as member function of anotherClass" <<endl;
    a.getData(p);
    return 0;
}