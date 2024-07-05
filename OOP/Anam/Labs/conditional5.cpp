#include <iostream>

using namespace std;

int main()
{
    int n,r,sum=0;
    cout << "Enter a number:";
    cin >> n;
    r=n;
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    cout << "The sum of first " << r << " numbers is " << sum << endl;
    return 0;
}