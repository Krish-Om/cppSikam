// Simple calculator using the Switch-Case statement

#include <iostream>
using namespace std;

void simpleCalculator()
{
    cout << "Enter two numbers: ";
    double num1, num2;
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout <<num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    default:
        break;
    }
}

int main(){
    simpleCalculator();
    return 0; 
}