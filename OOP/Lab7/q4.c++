// WAP to determine the size of a file using the file pointers manipulators.

#include <iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file1("foo1.txt",ios::in);
    int begin = file1.tellp();
    file1.seekp(ios::beg,ios::end);
    int last = file1.tellp();
    int size = last -begin;

    cout <<"Size of the file is : "<< size <<" bytes";
return 0;
}