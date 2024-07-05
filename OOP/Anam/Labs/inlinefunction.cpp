#include<iostream>

using namespace std;
inline int fun(int a,int b)
{
    return a*b;
}
int main()
{
    int x,y;
    cout << "Enter two numbers:"<< endl;
    cin >>x>>y;

    cout << "The multiplication of two numbers is "<< fun(x,y)<<endl;

    return 0;
}