#include <iostream>

#include <string>
using namespace std;
class Parent
{
private:
    int age;
    string DOB;

public:
    Parent()
    {
        age = 0;
        DOB = "0000/00/00";
    }

    void showData()
    {
        cout << age << " " << DOB << endl;
    }
};

class Child : public Parent
{
public:
    int age;

    Child()
    {
        age = 1;
    }
    void print(){
        cout << age;
    }
};
int main()
{
    Child obj;

    obj.showData();//accessing the base class member function
    
    return 0;
}