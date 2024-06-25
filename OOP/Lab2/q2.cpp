// Inline functions

#include<iostream>

using namespace std;


inline int add(int a, int b){
    return a+b;

}

int main(){
    cout << "Using inline function:"<<endl;
    add(2,3);
    return 0;
}