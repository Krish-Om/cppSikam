// Write a C++program that reads a number and tests whether is it multiple of 5 or 11

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a num : " << endl;
    cin >> num;

    if (num % 5 == 0)
        cout << "is mulitple of 5";
    else if (num % 11 == 0)
        cout << "is multiple of 11";
    else
        cout << "Not a multiple of 5 or 11 ";

    return 0;
}