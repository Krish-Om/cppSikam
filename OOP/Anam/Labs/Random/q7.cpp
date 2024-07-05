#include<iostream>

using namespace std;

class intamount
{
    private:

    int principle;
    float rate;
    int time;

    public:

    void getdata()
    {
        cout << "Enter principle amount: ";
        cin >> principle;
        cout << "Enter rate of interest: ";
        cin >> rate;
        cout << "Enter time: ";
        cin >> time;
    }

    void interest()
    {
        float i = (principle * rate * time) / 100;
        cout << "Interest is: " << i << endl;
    }

    void amount()
    {
        float a = principle + ((principle * rate * time) / 100);
        cout << "Amount is: " << a << endl;
    }
};

    int main()
    {
        intamount i1;
        i1.getdata();
        i1.interest();
        i1.amount();

        return 0;
    }