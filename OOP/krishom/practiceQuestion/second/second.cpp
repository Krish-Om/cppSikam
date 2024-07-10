#include <iostream>
#include <iomanip>
using namespace std;

void q1Largest()
{
    int a = 5, b = 6, c = 8;

    int large = a > b ? (a > c ? a : c) : (b > c ? b : c);

    cout << large << " is the larges " << endl;
}

void tempConversion()
{
    float c, f = 0;
    cout << "Enter temp in celsius: ";
    cin >> c;

    f = (9.0 / 5) * c + 32;

    cout << setprecision(2) << f << " is the required fahrenheit " << endl;
}

void armStrong()
{
    int num;
    cin >> num;
    int r, sum = 0;
    int a = num;
    while (num != 0)
    {
        r = num % 10;
        sum = r * r * r + sum;
        num /= 10;
    }

    if(a == sum){
        cout << "IS a armstrong number :" << endl;
    }
}
int main()
{
    // q1Largest();
    // tempConversion();
    armStrong();

    return 0;
}