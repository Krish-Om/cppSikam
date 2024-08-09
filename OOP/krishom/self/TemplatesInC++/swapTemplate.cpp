#include <iostream>

using namespace std;

template <typename T> void mySwap(T& a,T& b){
    T temp =a;
    a = b;
    b = temp;
}
int main(){
    int a = 10, b = 48;
    mySwap(a,b);
    cout << a << b;

    double ad = 45.4, bd = 45.3;
    mySwap(ad,bd);
    cout << ad << bd;
return 0;
}