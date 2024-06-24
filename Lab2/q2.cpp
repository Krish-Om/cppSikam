// Inline functions

#include<iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    cout << "Using inline function:"<<endl;
    cout << add(2,3) << endl;
    return 0;
}