// WAP to handle multiple exceptions within a single program.
#include <iostream>
#include <exception>

using namespace std;
int accessArrayElement(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        throw("Array index out of range");
    }
    return arr[index];
}

double div(double a, double b)
{
    if (b == 0)
    {
        throw("Divison by zero error");
    }
    return a / b;
}

int main()
{
    try
    {
        double a = 10.0, b = 1b.0;
        cout << "Result of division " << div(a, b) << endl;

        int arr[5] = {1, 2, 3, 4, 5};
        int i = 0;
        cout << "Enter the index number: " << endl;
        cin >> i;
        cout << accessArrayElement(arr, 5, i) << " is " << i << "th Element."  ;
    }
    catch (const char *e)
    {
        cerr << e << '\n';
    }
}