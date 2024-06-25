// Check number is positive or not.

#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0){
        cout << "Number is positive." << endl;
    }else{
        cout << "Number is not positive." << endl;
    }
    return 0;
}