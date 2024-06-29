#include <iostream>
using namespace std;

class Circle
{
public:
    double r;
    double a;
    static float PI;

    void getdata()
    {
        cout <<"Radius :" << endl;
        cin >> r;
    }

    float calcArea(){
        return PI*r*r;
    }

    void display(){
        cout << "Area of circle : "<<calcArea();
    }
};

float Circle::PI = 3.14;
int main()
{
    Circle c;
    c.getdata();
    c.display();

    return 0;
}

