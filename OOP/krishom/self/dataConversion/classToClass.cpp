#include <iostream>
#include<typeinfo>
using namespace std;


class AClass
{
private:
    int a;
    float b;

public:
    AClass()
    {
        a = 0;
        b = 0.0;
    }

    AClass(int valA, float valB){
        a= valA;
        b = valB;
    }
    void display()
    {
        cout << "Value in a: " << a << endl;
        cout << "Value in b: " << b << endl;
    }

    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};

class BClass{
    private:
        float val1;
        int val2;
    public:
        BClass(AClass obj){
            val2 = obj.get_b() + 1;
            val1 = obj.get_b() + 10;
        }

        void showdata(){
            cout << "Values of object BClass : " << val1 << " " << val2;
        }
};

int main()
{
    AClass aObj;
    aObj.display();
    cout << " \nThe type of bObj is : " << typeid(aObj).name() << endl;


    BClass bObj= aObj;
    cout << "Data conversion between two classes using constructor" << endl;
    bObj.showdata();
    cout << " \nThe type of bObj is : " << typeid(bObj).name() << endl;
    
    return 0;
}