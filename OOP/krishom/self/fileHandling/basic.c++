#include <iostream>

#include<fstream>

using namespace std;

int main()
{
    ofstream fout;

    string line;

    fout.open("basic.txt", ios::app);
    while (fout)
    {
        getline(cin, line);

        if (line == "-1")
            break;
        // write the content of the line in the file
        fout << line << endl;
        cout << line << endl;
    }
    fout.close();

    ifstream fin;
    fin.open("basic.txt", ios::in);
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}