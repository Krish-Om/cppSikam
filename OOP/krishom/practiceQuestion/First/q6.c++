
// 6. Write a C++program to read any two numbers and performs simple arithmetic operations (Addition, subtraction, division, multiplication).
// 7. Write a C++program to input time in second convert it into hour, minute and second.
// 8. Write a C++program that reads marks in five subjects and finds total marks, percentage.
// 9. Write a C++ program that reads coefficients of quadratic equations and finds its roots
// 10. Write a C++ program that reads a year (e.g 2012) and checks whether the entered year is leap year or not.

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

class Calculator
{
private:
    char choice;
    int a, b;

public:
    Calculator()
    {
        run();
    }
    void takeInput()
    {
        cout << "Press 'e' for exit. \n";
        cout << "Enter any two numbers: " << "\n";
        cin >> a >> b;
        cout << " Enter a operator: " << "\n";
    }
    void run()
    {
        while (true)
        {
            takeInput();
            cin >> choice;
            switch (choice)
            {
            case '+':
                cout << a + b << "\n";
                break;
            case '-':
                cout << a - b << "\n";
                break;
            case '*':
                cout << a * b << "\n";
                break;
            case '/':
                cout << a / b << "\n";
                break;
            case '%':
                cout << a % b << "\n";
                break;
            case 'e':
                exit(1);
                cout << "Exiting the program";
                break;
            default:
                cout << "Input data type error!";
                exit(0);
                break;
            }
        }
    }
};
class timeConvert

{
private:
    float second;

public:
    timeConvert(float s)
    {
        second = s;
        InHour();
        inMinute();
    }

    void InHour()
    {
        cout << setprecision(2);
        cout << "in hour: " << second / 60 / 60 << " hrs";
    }

    void inMinute()
    {
        cout << setprecision(2);
        cout << "\nin min: " << second / 60 << " mins";
    }
};

class Subjects
{
private:
    int marks[5];
    int total;
    float percentage;

public:
    Subjects()
    {
        total = 0;
        run();
    }
    void run()
    {
        takeInput();
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = (total / 500.0) * 100;

        cout << "\nTotal Obtained : \n"
             << total;
        cout << "\n Percentage : " << percentage;
    }
    void takeInput()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks for " << i + 1 << " : ";
            cin >> marks[i];
        }
    }
};

class quad
{
private:
    int a, b, c;

public:
    quad(int n1, int n2, int n3)
    {
        a = n1;
        b = n2;
        c = n3;
        calculateRoot();
    }

    void calculateRoot()
    {
        int d = b * b - (4 * a * c);
        if (d == 0)
        {
            
            float r = -b / 2 * a;
            cout << "roots are same: " << setprecision(2)<<r;
        }
        else if (d > 0)
        {
            setprecision(2);
            float r1 = ((-b + sqrt(d)) / 2 * a);
            float r2 = ((-b - sqrt(d)) / 2 * a);
            cout << "Roots are :\n "<<setprecision(2) << r1 << " " << r2;
        }
        else
        {
            setprecision(2);
            float real = b / 2 * a;
            float imag = sqrt(-d) / 2 * a;
            cout << "imaginary roots are : \n"
                << setprecision(2) << real << "+ i" << imag;
            cout << "\n";
            cout << setprecision(2)<< real << "- i" << imag;
        }
    }
};
int main()
{
    // Calculator c;
    // timeConvert t(500);
    // Subjects s;
    quad(1,2,3);
    return 0;
}