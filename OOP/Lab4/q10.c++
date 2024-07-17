#include <iostream>
    
using namespace std;

class Rupees{
    private:
        double rs;
        double paisa;
    public:
        Rupees(){
            rs =0;
            paisa =0;
        }

        Rupees(double r, double p)
        {
            rs = r;
            paisa = p;
        }
        void showData(){
            cout << "Rs : " << rs << " paisa : "<< paisa<< endl;
        }
};
class Dollar{
    private:
        double dol;
        double cent;
    public:
        Dollar(){
            dol =0;
            cent =0;
        }
        Dollar(double d, double c){
            dol = d;
            cent=c;
        }
        //casting operator
        operator Rupees(){
            Rupees r(dol * 113, cent *0.5);
            return r;
        }
};

int main(){
    Dollar d(10,40);
    Rupees r;
    r = d;
    r.showData();
return 0;
}