#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x>0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is negative." << endl;
    }
    return 0;
}