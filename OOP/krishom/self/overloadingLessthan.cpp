#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }
    void display()
    {
        cout << marks;
    }
    bool operator<(Student s)
    {
        return marks < s.marks;
    }
};

int main()
{
    Student s1(60), s2(75);

    if (s1 < s2)
        cout << " s1 has less marks";
    else
        cout << "s2 has less marks";

    return 0;
}