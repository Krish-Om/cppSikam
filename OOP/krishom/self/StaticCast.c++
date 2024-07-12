#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int i = 10;
    double d = static_cast<double>(i);
    // cout << sizeof(i) << endl;
    // cout << d <<endl;
    int x = 5, y = 2;

    float z = x / y; // this will ignore the decimla point value
    cout << "The value of z :" << z<<endl;
    // but
    z = static_cast<double>(x) / y; // this wont
    cout << z << endl;
    // cout << typeid(static_cast<float>(45)).name() << endl;
    return 0;
}