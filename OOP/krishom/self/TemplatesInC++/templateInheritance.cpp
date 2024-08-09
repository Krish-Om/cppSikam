#include <iostream>

using namespace std;
template <typename T>
class container {
    public:
        void add(T item){}
        T remove(){}
};

template <typename T> //templates inheritance
class Stack: public container<T>{
    public:
        void push (T item) {
            add(item);
        }
        T pop(){
            return container<T> :: remove();
        }
};

int main(){
    container<int> cont;
    cont.add(34);
return 0;
}