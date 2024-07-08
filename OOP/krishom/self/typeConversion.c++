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
            hours = t/60;
            min = t/60;
        }


    void display(){
        cout << hours << ' ' << min;
    }
};
int main(){
    Time t1;
    int dur = 95;
    t1 = dur;
    t1.display();
return 0;
}