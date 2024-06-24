//Programs to illustrate the concepts of:
//Class and objects
//Destructor
//        Passing and returning objects from functions

#include <iostream>
#include "string"
using namespace  std;

class Vehicle{
public://properties of class
    int numOfWheels;
    string colors;

    //methods or behaviours
    void startTheEngine(){
        cout <<"Engine started"<<endl;
    }

    void setNumofWheels(int wheels){
        numOfWheels = wheels;
    }
    void setColors(string color){
        colors = color;
    }

    void displayVehicle(){
        cout << "This vehicle has "<<numOfWheels;
        cout << "\n It is " << colors << " in color"<<endl;
    }
};

int main(){
    Vehicle car;
    car.setColors("Red");
    car.setNumofWheels(4);
    car.displayVehicle();
    car.startTheEngine();
    return 0;
}
