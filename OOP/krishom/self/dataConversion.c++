#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int mins;

public:
    Time(int h, int m)
    {
        hours = h;
        mins = m;
    }

    Time()
    {
        hours = 0;
        mins = 0;
    }

    operator int()
    {
        cout << "Type conversion from class object "
             << "to primitive type " << endl;
        return (hours * 60 + mins);
    }

    void display()
    {
        cout << hours << " " << mins << endl;
    }
};
int main()
{
    Time t(30, 30);
    t.display();

    // calling converstion operator
    int val = t.operator int();
    // or
    int val1 = t;
    // or
    int val2 = int(t);
    cout << "\n value in integer variable val is : " << val << endl;
    cout << "\n value in integer variable val is : " << val1 << endl;
    cout << "\n value in integer variable val is : " << val2 << endl;

    return 0;
}