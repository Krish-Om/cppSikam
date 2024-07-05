// Write a C++program that reads a number and tests whether is it multiple of 5 but not 11


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " <<endl;
    cin >> n;
    
    ((n % 5 == 0) && !(n % 11 ==0 )) ? cout << "Is multiple of 5, but not 11 " : cout <<"None";
}