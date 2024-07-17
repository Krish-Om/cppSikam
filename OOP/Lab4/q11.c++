#include <iostream>

using namespace std;
class Fahrenheit
{
private:
    double temp;

public:
    Fahrenheit() { temp = 0; }
    Fahrenheit(double t) { temp = t; }
    void showTemp() { cout << "Value in Fahrenheit is: " << temp << " F"; }

    ~Fahrenheit() {}
};
class Celsius
{
private:
    double temp;

public:
    Celsius() {}
    Celsius(double t)
    {
        temp = t;
    }
    operator Fahrenheit()
    {
        double c = (9.0 / 5) * temp + 32;
        return Fahrenheit(c);
    }
    void showTemp()
    {
        cout << "Value in Celsius : " << temp << " C";
    }
    ~Celsius() {}
};

int main()
{
    Celsius c(100);
    Fahrenheit f;
    f = c;
    f.showTemp();

    return 0;
}