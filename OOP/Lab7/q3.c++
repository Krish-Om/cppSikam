#include <iostream>
using namespace std;
class Vector
{
private:
    double x;
    double y;

public:
    Vector() : x(0), y(0) {}

    Vector(double x, double y) : x(x), y(y) {}

    friend istream& operator>>(istream&, Vector&);
    friend ostream& operator<<(ostream&, const Vector&);
};

istream& operator>>(istream& input, Vector& v)
{
    cout << "Enter x and y: ";
    input >> v.x >> v.y;
    return input;
}

ostream& operator<<(ostream& output, const Vector& v)
{
    output << "Vector: (" << v.x << ", " << v.y << ")";
    return output;
}

int main()
{
    Vector v;
    cout << "Enter a Vector: " << endl;
    cin >> v;
    cout << "Value of " << v << endl;

    return 0;
}
