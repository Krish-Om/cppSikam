// WAP to create a copy of a file using the methods: put(), and get()

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char ch;
    try
    {
        fstream file1("foo1.txt", ios::in);
        fstream file2("foo2.txt", ios::out);
        if(!file1.is_open() || !file2.is_open()){
            throw runtime_error("failed to open the files");
        }
        
        while (file1.get(ch))
        {
            file2.put(ch);
        }
        cout << "successfully copied the content" << endl;
        file1.close();
        file2.close();
    }
    catch (const exception &e)
    {
        cerr << e.what();
    }

    return 0;
}