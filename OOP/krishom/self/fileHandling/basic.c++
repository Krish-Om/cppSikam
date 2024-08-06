#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    ofstream fout;

    string line;

    fout.open("basic.txt",ios::app);
    while (fout)
    {
        getline(cin, line);

        if (line == "-1")
            break;
        //write the content of the line in the file
        fout << line << endl;
    }
    fout.close();
    return 0;
}