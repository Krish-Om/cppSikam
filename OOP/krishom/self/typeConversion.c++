#include <iostream>
using namespace std;

class Time{
    private:
        int hours;
        int min;
    public:
        Time(){
            hours =0;
            min=0;
        }

        Time(int t){
            hours = t + 10;
            min = t + 5;
        }


    void display(){
        cout << hours << endl << min;
    }
};
int main(){
    Time t1;
    int dur = 95; 
    t1 = dur; // implicit conversion from basic to user-defined
    //Also, the constructor Time(int t) is called during the conversion
    // and it implicitly converts the int type to class Time type.
    // Further the object t1 will have its data members assigned 
    //and we can acces the member function too. 
    Time t2 = 45; // This demonstrates the implicit data conversion of basic to user-defined
    //data type
    t1.display();
return 0;
}