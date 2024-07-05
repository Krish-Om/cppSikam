#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    int r,n,sum=0,count=0;
    cout << "Enter a number:";
    cin >> n;
    int a=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=a;
    while(n>0)
    {
        r=n%10;
        sum=sum+round(pow(r,count));
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
