#include <iostream>

using namespace std;
template <typename T>
class ArrayList {
    T *arr;
    int size;
    public:
    ArrayList(){
        size = 0;
        arr = new T[size];
    }
    ArrayList(int s){
        size = s;
        arr = new T[size];
    }

    void add(T d){
        this->arr[size] = d;
        ++this->size;
    }

    void print(){
        cout <<"\n [ ";
        for(int i=0;i<size;i++){
            cout << arr[i];
        }
        cout << " ] \n";
    }
};


int main(){
    ArrayList<int> arr;
    arr.add(34);

    arr.print();
return 0;
}