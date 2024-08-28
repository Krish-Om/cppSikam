// WAP to illustrate the use of multiple types in class template.
#include<iostream>
using namespace std;

template <typename T1, typename T2>
class MyClass {
    T1 var1;
    T2 var2;
    
public:
    MyClass(T1 v1, T2 v2) {
        var1=v1;
        var2= v2;
    }
    
    void display() {
        cout << "var1: " << var1 << endl;
        cout << "var2: " << var2 << endl;
    }
};

int main() {
    MyClass<int, double> obj(10, 3.14);
    obj.display();
    
    return 0;
}