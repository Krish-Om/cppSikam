// WAP of your choice to illustrate the use of function template with multiple arguments.
#include <iostream>

using namespace std;;

template <class T>
T sum(T n1,T n2){
    return n1+n2;
}

int main(){
    cout <<"Enter Two Integers: " <<endl;
    int n1,n2;
    cin >>n1>>n2;
    cout <<"Sum : " << sum(n1,n2) <<endl;

    cout <<"Enter two floating numbers:"<<endl;
    double a,b;
    cin>>a>>b;
    cout <<"Sum :" << sum(a,b);
return 0;
}