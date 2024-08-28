#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        int n1, n2;
        cout << "Enter any two integers: " << endl;
        cin >> n1 >> n2;

        if (n2 == 0)
        {
            throw runtime_error("Division by 0 error");
        }

        int res = n1 / n2;
        cout << "Res: " << res << endl;

        string str = "1234abcdef";
        for (char c : str)
        {
            if (!isdigit(c))
            {
                throw invalid_argument("Invalid character in string");
            }
        }
    }
    catch (const exception& e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}