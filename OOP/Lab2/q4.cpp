// Pass by reference and return by reference.

#include <iostream>
using namespace std;
//global variable
int x;

int &ref(){ //return by reference
    return x;//returning reference of x
}

void swap(int &a, int &b){ //pass by reference
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    ref() = 10; //assging value to the returned reference
    cout<< x<<endl;

    int a = 10, b = 20;
    swap(a,b);//passing reference of a and b
    cout <<"Values after swapping :" << a << " " << b << endl;
    return 0;
}