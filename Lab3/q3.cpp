//Destructor
#include<iostream>
#include<string>

using namespace std;

class Vehicle{
    public:
        int numOfWheels;
        string colors;
    
    Vehicle(){//default constructor 
        numOfWheels = 4;
        colors = "Red";
    }

    ~Vehicle(){ //destructor
        cout << "Destructor called"<<endl;
    }

};

int main(){
    Vehicle car;//calls default constructor
    cout << "This vehicle has "<<car.numOfWheels<<" wheels and is "<<car.colors<<" in color"<<endl;
    
    return 0;
}
