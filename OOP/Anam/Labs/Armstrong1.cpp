#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter a number:";
    cin >> n;
    int r,a;
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==a)
    {
        cout << "The number is an Armstrong number." << endl;
    }
    else

    {
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}