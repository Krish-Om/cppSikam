// WAP to illustrate the basic exception handling

#include <iostream>

using namespace std;


int main(){

    int n1,n2;
    cout <<"Enter any two numbers for division" <<endl;
    cin >>n1>>n2;    
    try{
        if(n2 !=0){
        int d = n1/n2;
        cout <<"quotient is " <<d;
        }else{
            throw "Arithmetic Error: Cannont divide by 0";
        }
    }
    catch(const char* e)
    {
        cerr << e << '\n';
    }
    
return 0;
}