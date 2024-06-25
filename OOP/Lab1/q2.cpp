// Check number is positive or negative.
#include<iostream>

using namespace std;
int main(){

    int num;
    cout<< "Enter a number:"<<endl;
    cin>> num;

    if(num > 0)
        cout<< "Number is positive."<<endl;
    else
        cout<<"Number is negative";

    return 0;
}
