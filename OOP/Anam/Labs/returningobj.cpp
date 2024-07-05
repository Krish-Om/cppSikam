#include <iostream>

using namespace std;

class complex 
{
    float real,img;
    public:
    complex add(complex obj1,complex obj2)
    {
        complex obj3;
        obj3.real=obj1.real+obj2.real;
        obj3.img=obj1.img+obj2.img;
        return obj3;
    }
    void take()
    {
        cout << "Enter the real and imaginary part of the complex number:";
        cin >> real >> img;
    }
    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    float a,b,c,d;
    complex obj1,obj2,obj3;
    obj1.take();
    obj2.take();

    obj3=obj3.add(obj1,obj2);
    obj3.show();
    return 0;
}