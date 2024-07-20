#include <iostream>

using namespace std;

class Vector
{
private:
    int speed;
    int distance;

public:
    Vector(int s, int d)
    {
        speed = s;
        distance = d;
    }

    Vector operator+=(Vector &v)
    {
        return Vector(speed += v.speed, distance += v.distance); // nameless object
    }
    void display()
    {
        cout << speed << endl
             << distance;
    }
};
int main()
{
    Vector A(10, 50);
    Vector sum(0, 0);
    for (int i = 0; i < 3; i++)
    {
        sum += A;
    }
    sum.display();
    return 0;
}