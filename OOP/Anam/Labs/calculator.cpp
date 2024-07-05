#include<iostream>

using namespace std;

int main()
{   
    int a,b,c;
    cout << "Enter Two numbers for calculation: "<< endl;
    cin >> a >> b;
    cout << "Enter a number from 1 to 4 for "<<endl;
    cout << "ADDITION is 1 \n SUBTRACTION is 2 \n MULTIPLICATION is 3 \n DIVISION is 4: ";
    int x;
    cin >> x;

    switch(x)
    {
        case 1:
        c=a+b;
        cout << "The addition of two numbers "<<a<<"+"<<b<<" is "<<c<<endl;
        break;

        case 2:
        c=a-b;
        cout << "The subtraction of two numbers "<<a<<"-"<<b<<" is "<<c<<endl;
        break;

        case 3:
        c=a*b;
        cout << "The Multiplication of two numbers "<<a<<"*"<<b<<" is "<<c<<endl;
        break;

        case 4:
        c=a/b;
        cout << "The Division of two numbers "<<a<<"/"<<b<<" is "<<c<<endl;
        break;
    }


    return 0;
}