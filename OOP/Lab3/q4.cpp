// Passing and returning objects from functions
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
        int numOfWheels;
        string colors;

    void passingObjects(Vehicle v){
        cout <<"Recieved a Vehicle type object"<<endl;
        cout << "This vehicle has "<<v.numOfWheels;
        cout << "\n It is " << v.colors << " in color"<<endl;
    }

    Vehicle returningNewObjects(){
        Vehicle v;
        v.numOfWheels = 4;
        v.colors = "Red";
        cout << "returning an object"<<endl;
        return v;
    }

};

int main(){

    Vehicle car;
    car.numOfWheels = 4;
    car.colors = "Silver-Black";
    car.passingObjects(car);
    Vehicle newCar = car.returningNewObjects();
    car.passingObjects(newCar);
    
    return 0;
}