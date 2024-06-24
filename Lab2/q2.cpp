// Inline functions

#include<iostream>

using namespace std;

inline void add(int a, int b){
     cout << a+b << endl;
}

int main(){
    cout << "Using inline function:"<<endl;
    add(2,3);
    return 0;
}