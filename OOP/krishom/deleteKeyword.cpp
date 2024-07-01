#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int *ptr = new int; // intialized memory address of memory size of int
    *ptr = 20;// storing value at allocated memory address
    cout << "Addres in ptr : " << ptr << endl;
    cout << "Value pointed by ptr : " << *ptr << endl;

    // some operation on num via ptr;
    for (int i = 0; i < 5; i++)
    {
        // *ptr = *ptr + i;
        *ptr += i;
    }

    cout << "\n Some operation done in num var via ptr \n"<<endl;
    // now ptr is no longer used so it can be deleted or memory can be freed;
    delete ptr;//frees the memory allocated to ptr


    // accessing freed ptr is invalid and results in undefined behaviour
    cout << "Address in ptr: " << ptr << endl; // it still holds the address of memory location 
    // but it is no longer valid
    cout << "Value pointed by ptr is :" << *ptr;// it will give garbage value 
    return 0;
}