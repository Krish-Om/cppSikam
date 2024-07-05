// Write a C++program that reads a number and finds sum of the squares of digits
// (For example, if the number if 235 then sum = 22+32+52 =38)

#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "enter a num: ";
    cin >> n;

    int count = 0, r, sum = 0;
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        sum += (r * r);
        count++;
    }
    cout << sum;

    return 0;
}