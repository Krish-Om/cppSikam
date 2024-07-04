#include <iostream>

using namespace std;

class Vector{
    private:
        float speed;
        float distance;

    public:
        Vector(){
            speed =0;
            distance =0;
        }

        Vector(float s, float d){
            speed = s;
            distance =d;
        }

        void operator +(Vector &v1){
            speed = v1.speed + speed;
            distance = v1.distance + distance;

            cout << "Resultant Speed and Distance : "<< speed <<" "<< distance <<endl;
        }

        
};
int main(){
    Vector v(3,4),v2(1 ,4);
    v+v2;
return 0;
}