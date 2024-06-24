//Constructor (default, parameterized, copy)
#include<iostream>
#include "string"

using namespace std;

class Vehicle{
public://properties of class
    int numOfWheels;
    string colors;

    //default constructor
    Vehicle(){
        cout << "Default constructor called"<<endl;
    }

    //parameterized constructor
    Vehicle(int wheels, string color){
        cout << "Parameterized constructor called"<<endl;
        numOfWheels = wheels;
        colors = color;
    }
    
    //Copy constructor
    Vehicle(Vehicle &copyVehicle){
        cout << "Copy constructor called"<<endl;
        numOfWheels = copyVehicle.numOfWheels;
        colors = copyVehicle.colors;
    }

    ~Vehicle(){ //destructor
        cout << "Destructor called"<<endl;
    }

};

int main(){
    Vehicle car;//calls default constructor
    cout <<car.numOfWheels << " " << car.colors;
    cout << "\n";
    Vehicle bike(2, "Black");//calls parameterized constructor
    cout << bike.numOfWheels << " " << bike.colors;
    cout << "\n";
    Vehicle copyBike(bike);//calls copy constructor
    cout << copyBike.numOfWheels << " " << copyBike.colors;
    cout << "\n";
    return 0;
}