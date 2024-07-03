#include <iostream>
    
using namespace std;

class Set{
    private:
        int size;
        int data[];

    public:
        Set(){
            size = 10;
            data[size] =(int)NULL;
        }

        void print(){
            for(int i=0;i<size;i++){
                cout << data[i] << " ";
            }
        }
};
int main(){
    Set A;
    A.print();
return 0;
}