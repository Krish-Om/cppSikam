#include <iostream>
#include<string>
using namespace std;
class Marks{
    public:
        int Eng,Math,Nep;
        Marks(){}
        Marks(int e, int m, int n){
            Eng  = e;
            Math = m;
            Nep = n;
        }
};
class Student : Marks{
    private:
        string name;
    public:
        Student():Marks()
        {}
        Student(string nam,int e, int m, int n):Marks(e,m,n)
        {
            name=nam;
        }
        void display(){
            cout << "Name: " <<name<< endl;
            cout <<"Marks : "<<"\nEng: " << Eng << "\nMath: " << Math << "\nNep: "<< Nep; 
            cout <<"\nPercentage obtained : " << getPercentage() << "%";
        }
        double getPercentage(){
            double sum = Eng+Math+Nep;
            return (sum/300) * 100 ;
        }
};


int main(){
    Student s("Krishom ", 50,70,80);
    s.display();
return 0;
}