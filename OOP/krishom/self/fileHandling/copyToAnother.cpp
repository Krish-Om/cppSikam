#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream file1("file1.txt");
    ofstream file2("file2.txt");

    string line;
    if(file1.is_open() && file2.is_open()){
        file2 << "Copying from the file 1 " << endl;
        while (getline(file1,line))
        {
            file2 << line << endl;
        }
    }else{
        cerr << "Unable to open the file" << endl;
    }
    file1.close();
    file2.close();
return 0;
}