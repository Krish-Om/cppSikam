#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // // opening file for writing in the file
    // fstream myFile("hello.txt", ios::out);
    // string line1;
    // getline(cin, line1);

    // if (myFile)
    //     myFile << line1 << endl;
    // myFile.close();

    // opeing file for reading from the file
    fstream myFileRead("hello.txt", ios::in);
    string line;

    try
    {
        while (getline(myFileRead, line))
        {
            cout << line << endl;
        }
    }
    catch (const exception &e)
    {
        cerr << e.what();
    }
    myFileRead.close();

    return 0;
}