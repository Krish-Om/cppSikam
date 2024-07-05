#include <iostream>
using namespace std;

int a;

int &retur(){ 
    return a;
}

void swap(int &a, int &b){ 
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    retur() = 55; 
    cout<< a <<endl;

    int a = 10, b = 20;
    swap(a,b);
    cout <<"Values after swapping :" << a  << endl<< b<< endl;
    return 0;
}