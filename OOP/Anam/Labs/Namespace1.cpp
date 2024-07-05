#include<iostream>

using namespace std;

int x = 10;

namespace Outer 
{
    int x = 20;


namespace Inner
{
    int x = 30;
}
}

int main()
{
    cout << "Global Variable:" << x << endl;
    cout << "Outer Namespace Variable:" << Outer::x << endl;
    cout << "Inner Namespace Variable:" << Outer::Inner::x << endl;

    return 0;
}