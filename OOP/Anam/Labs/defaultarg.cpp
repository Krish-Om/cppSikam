#include <iostream>

using namespace std;

int sub(int x=5,int y=3){

    return x-y;

}

int main()
{
    int a=10,b=4;
    
    cout << "Ignoring default arg value is "<<sub(a,b)<< endl;
    cout << "Using default arg value is "<<sub()<<endl;
cout << "The default values is 5-3 and inputed value is 10-4.";
    return 0;
}