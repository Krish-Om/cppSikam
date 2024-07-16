#include <iostream>

using namespace std;
class Fibonacci
{
private:
    int num;

public:
    Fibonacci()
    {
        num = 0;
    }
    Fibonacci(int n)
    {
        num = n;
    }
    int fibo(int i)
    {
        if (i == 0)
            return 0;
        else if (i == 1 || i == 2)
            return 1;
        else
            return (i == 0 || i == 1) ? 1 : fibo(i - 1) + fibo(i - 2);
    }
    int operator++()
    {
        return fibo(++num);
    }

    ~Fibonacci(){};
};

int main()
{
    Fibonacci f;
    cout << "Enter the next no. of term : " << endl;
    int n;
    cin >> n;
    f=n;
    cout << "The next fibonacci terms: " << ++f;
    return 0;
}