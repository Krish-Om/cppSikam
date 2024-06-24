// Accept number from user and find either it is Armstrong number or not.
// (the number of digits in input number must be computed using program logic)

#include <iostream>
#include <cmath>

using namespace std;
int isArmstrong(int num)
{
    int temp = num;
    int sum = 0;
    int count = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
    {
        cout << num << " is Armstrong." << endl;
    }
    else
    {
        cout << num << " is not Armstrong." << endl;
    }

    return 0;
}