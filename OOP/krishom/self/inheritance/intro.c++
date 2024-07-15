#include <iostream>
#include<typeinfo>
#include <string>
using namespace std;
class Parent
{
private:
    int age;
    string DOB;

public:
    string name;
    string address;
    Parent()
    {
        age = 0;
        DOB = "0000/00/00";
    }

    void showData()
    {
        cout << age << " " << DOB << endl;
        cout << name << " " << address << endl;
    }
};

class Child : public Parent
{
public:
    int age;

    Child()
    {
        age = 0;
    }
    void print(){
        cout << age;
    }
};
int main()
{
    Child obj;
    obj.name = "Krishom ";//
    obj.address = "Bkt";
    cout << typeid(obj).name() <<endl;
    obj.showData();//accessing the base class member function
    obj.print();// also the child member functions
    return 0;
}
