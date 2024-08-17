#include <iostream>
#include<fstream>
#include<string>

using namespace std;

void writeToFile(const string& filename, const string& content){
    ofstream outFile(filename,ios::out);
    if(outFile.is_open()){
        outFile<<content << endl;
        outFile.close();

        cout << "Data written successfully" << endl;
    }else{
        cerr << "Unable to open the file for writing" << endl;
    }
}

void readFromFile(const string& filename){
    ifstream inFile(filename,ios :: in);
    string line = "";
    if(inFile.is_open()){
        while (getline(inFile,line))
        {
            cout << line << endl;
        }
        inFile.close();
    }else{
        cerr << "Unable to open file for reading" << endl;
    }
}
int main(){
    string file = "practice.txt";
    string content = "Hello world!";
    cout << "Enter the content you want to store in the file " << endl;
    getline(cin,content); // geline is a overloaded function for string operation
    writeToFile(file,content);

    readFromFile(file);

return 0;
}