#include <iostream>
#include<string>
using namespace std;

//data conversion from basic to user-defined 
class Time{
    private:
        float hours;
        float min;
    public:
        Time(){
            hours =0;
            min=0;
        }

        Time(int t){
            hours = (float)t/ (60*60);
            cout <<"hours: " << hours<< endl;
            min = (float)(t%3600)/60;//first, find the remainder seconds after 
            //  calculating hours, then 
            // those seconds to minutes
        }


        // conversion operator : to integer type
        operator int(){
            return hours;
        }


        operator string(){
            return "Conversion of object to string";
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


    // From class to primitive data type
    Time t4(10000.34);
    int val = t4;// the data conversion occurs in this line 
    // the overloaded conversion operator gets called and implicitly converts the data
    // cout << val  << '\n';
    string str = t4;
    // cout << str;

return 0;
}