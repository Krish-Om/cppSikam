#include<iostream>

using namespace std;

int Function();

namespace outer
{
    void outerfunction(){
        cout << "This is the outer function."<< endl;

    }

namespace inner {
    void innerfunction() {
        cout << "This is the inner function." << endl;

    }
  }
}
int main() 
{
    cout << "Normal function call:" << endl;
    Function();

    cout << "Using Namespace calling outer function:" << endl;
    outer::outerfunction();

    cout << "Using Namespace calling inner function:" << endl;
    outer::inner::innerfunction();
    return 0;
}
int Function(){
    
    cout << "This is the global function." << endl;
    return 0;

}
