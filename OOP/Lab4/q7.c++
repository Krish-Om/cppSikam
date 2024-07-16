#include <iostream>
    
using namespace std;
class Integer{
    private:
        int value;
    public:
        Integer(){
            value =0;
        }
        Integer (int i){
            value =i;
        }
        void operator++(int){
            value ++;
        }

        void operator++(){
            ++value;
        }
        int getValue(){return value;}

};
int main(){
   Integer i(100);
   cout <<i.getValue()<<endl; 
   ++i;
   cout <<i.getValue()<<endl; 
   i++;
   cout <<i.getValue()<<endl; 
return 0;
}