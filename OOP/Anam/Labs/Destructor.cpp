#include<iostream>

using namespace std;

class Student
{
    private:

        int roll;
        char name[20];
        float marks;

    public:

    Student()
    {
        cout<<"Enter the roll number of the student: ";
        cin>>roll;
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the marks of the student: ";
        cin>>marks;
    }

    ~Student()
    {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<roll<<endl;
    cout<<"Marks: "<<marks<<endl;
    }

};

int main()
{
    Student s1;
    cout<<"Student details: "<<endl;
    return 0;
}