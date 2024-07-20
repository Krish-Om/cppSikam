#include <iostream>
#include <memory>
using namespace std;
int main()
{
    int num = 45, num2 = 36;
    int *ptr;
    ptr = &num;
    cout << "Address : " << ptr << endl;

    ptr = new int; // reallocating the new memory address to ptr of type int
    cout << "New address : " << ptr << endl;

    cout << "value : " << *ptr << endl;

    ptr = &num2;
    cout << "value " << *ptr << endl;
    return 0;
}