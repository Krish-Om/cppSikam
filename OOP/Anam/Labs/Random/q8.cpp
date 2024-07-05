#include<iostream>

using namespace std;

class circle
{
    private:
        float radius;
        float area;

    public:

    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    void calcArea()
    {
        area = 3.14 * radius * radius;
    }

    void display()
    {
        cout << "Area is: " << area << endl;
    }
};
    int main()
    {
        circle c1;
        c1.getdata();
        c1.calcArea();
        c1.display();

        return 0;
    }