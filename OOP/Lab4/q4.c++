// Write a program to  convert polar coordinate
// into rectangular coordinate using conversion/cast function.x
#include <iostream>
#include <cmath>

using namespace std;
double PI = 3.14;

class Rectangular
{
private:
    int x, y;

public:
    Rectangular()
    {
        x = 0;
        y = 0;
    };

    Rectangular(int p, int q){
        x = p;
        y = q;
    }

    void display(){
        cout << "Rectangular Coordinates : x = " << x << " y = " << y << endl;
    }
};


class Polar
{
private:
    int radi, angle;

public:
    Polar()
    {
        radi = 0;
        angle = 0;
    }
    Polar(int r, int theta)
    {
        radi = r;
        angle = theta;
    }

    operator Rectangular()
    {
        cout << "Conversion : "<< endl;
        double radian = angle * (PI/180.0);
        double xVal = radi * cos(radian);
        double yVal = radi * sin(radian);

        return Rectangular(xVal,yVal);
    }

    void display(){
        cout << "Polar coordinates : r = " << radi << " Theta: " << angle << endl;
    }
};
int main()
{
    Polar polarCoord(19,30);
    Rectangular rec = polarCoord;

    polarCoord.display();
    cout << endl;
    rec.display();
    return 0;
}