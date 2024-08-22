#include <iostream>

using namespace std;

int main()
{
    int num;
    while(true){

    cout <<"\nEnter a number : " << endl;
    cin >>num;
    if(cin.good()){ //if no errors
        cin.ignore(10,'\n');
        break;
    }
    cin.clear(); //clears the error bits
    cout <<"Incorrect input ";
    cin.ignore(10,'\n');//remove new line
    } 

    cout << "Num is : " << num << endl; //erro-free integer
    return 0;
}