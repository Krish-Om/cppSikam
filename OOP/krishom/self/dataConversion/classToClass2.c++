#include <iostream>
#include <string>
using namespace std;

class AClass
{
    string type;

public:
    AClass()
    {
        type = "I am AClass object";
    }

    string getType()
    {
        return type;
    }
    void setType(string strType){
        type = strType;
    }
};

class BClass
{
    string value;

public:
    BClass()
    {
        value = " BClass object";
    }

    operator AClass()// converting into destination class (i.e BClass to AClass)
    {
        cout << "Conversion using operator overloading " << endl;
        AClass obj;
        obj.setType(value);
        value = obj.getType();
        return obj;
    }
    void display()
    {
        cout << "\n";
        cout << value << endl;
    }
};
int main()
{
    AClass a;
    BClass b;

    a = b;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    return 0;
}