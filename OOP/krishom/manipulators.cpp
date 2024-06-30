// #include <iostream>

// #include<iomanip>
// #include<ios>
#include <bits/stdc++.h> // can be replaced for above three header files
// Note: only works for GNU c++ compiler, won't be compiled if other compiler is used.
// but downside is the compilation time is much slower.

using namespace std;
int main()
{
    int n = 5;
    cout << setbase(16) << "Hexadecimal value of n : " << n << endl;
    cout << setbase(8) << "Octal value of n : " << n << endl;
    //binary is not available in library function
    for (int i = 0; i < n; i++)
    {
        // setw(value)-> inserts whitespaces  in between the outputs
        cout << "Setting width: " << endl;        // endl means end of line
        cout << setw(10) << i << setw(5) << endl; // 10 whitespaces before i and 5 whitespaces
                                                  // after i
    }

    return 0;
}