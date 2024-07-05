#include<iostream>

using namespace std;

class student
{
    float x;
    public:
    void swap(student obj1,student obj2)
    {
        int temp;
        temp=obj1.x;
        obj1.x=obj2.x;
        obj2.x=temp;

        cout << obj1.x << " " << obj2.x << endl;
    }

    void take (int a)
    {
        x=a;
    }
};
int main()
{
    float a,b;

    cout << "Enter two numbers:";
    cin >> a >> b;
    
    student obj1,obj2,obj3;

    obj1.take(a);
    obj2.take(b);
    obj3.swap(obj1,obj2);

    return 0;
}