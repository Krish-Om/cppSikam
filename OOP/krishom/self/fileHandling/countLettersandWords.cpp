#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("basic.txt", ios::in);
    string word;
    unsigned int words = 0;
    if (file.is_open())
    {
        while (file >> word) // overloaded function 
        {
            words++;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open the file for reading" << endl;
    }

    cout << words;
    return 0;
}