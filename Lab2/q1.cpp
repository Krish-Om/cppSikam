// Function overloading




#include <iostream>
#include <string>
using namespace std;

int add(int,int);
float add(float,float);
string add(string,string);

int main(){
    cout << add(2,3) << endl;
    cout << add(2.5f,3.5f) << endl;
    cout << add("Hello ","World") << endl;
    return 0;
}

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

string add(string a, string b){
    return a+b;
}