#include <iostream>
#include <string>
using namespace std;

int add(int , int);

float add(float , float);

string add(string , string);

int main(){
    cout << add(5 , 6) <<endl;
    cout << add(5.5f,2.5f) << endl;
    cout << add("Anam ","Neupane") << endl;
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