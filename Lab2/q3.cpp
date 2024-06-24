// Default arguments

#include<iostream>

using namespace std;


int areaOfCircle(int r = 1, float pi = 3.14){ // Default arguments
    return pi*r*r;
}

int main(){
    cout << "Area of circle wihtout passing arguments: " << areaOfCircle() << endl;
    cout << "Area of circle with arguments: " << areaOfCircle(5,3.14159) << endl;
    return 0;
}
