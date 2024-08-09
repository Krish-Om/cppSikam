#include <iostream>

using namespace std;


int main(){
    int x= 10,y =0;
    try {
        int result =x/y;
        cout <<result << endl;
    }catch(exception& e){
        cerr << e.what() << endl;
    }

return 0;
}