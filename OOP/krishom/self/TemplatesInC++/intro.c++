#include <iostream>

using namespace std;
template <typename A>
A sum(A n1, A n2)
{
    return n1 + n2;
}

int main()
{
    cout << " Sum : " << sum(2, 5) << endl;
    cout << "Sum : " << sum(2.5, 77.4) << endl;

    return 0;
}