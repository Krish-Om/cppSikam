// Write a C++program that reads a number and tests whether it is multiple of 5 or not.

#include <iostream>
    
using namespace std;
int main(){
    int num;
    cout << "Enter a number " << endl;
    cin>>num;

    cout << (num%5 == 0) ? "Is a multiple of 5 ": "Not a multiple of 5";
    
return 0;
}