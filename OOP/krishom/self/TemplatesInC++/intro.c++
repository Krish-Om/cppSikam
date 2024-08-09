#include <iostream>

using namespace std;
//function templates
template <typename A>
A sum(A n1, A n2)
{
    return n1 + n2;
}

class myClass{};
//class templates
template <class T,typename D > class Foo{
    T data;
    D value;
    public:
    Foo(D d){
        this->value = d;
        
    }
    // template <typename D>
    void show(D d=int){
        cout << "Value of d :" << d + 2
        << "Value of data : " << this->data; 
    }

    void useD(D d){ 
        cout <<"value of d" << d;
    }
    
};


int main()
{
    cout << " Sum : " << sum(2, 5) << endl;
    cout << "Sum : " << sum(2.5, 77.4) << endl;
    Foo<int,int> f1(25);
    return 0;
}