#include <iostream>

using namespace std;

class Kilogram
{
private:
    float weight;

public:
    Kilogram()
    {
        weight = 0;
    }
    Kilogram(float wt)
    {
        weight = wt;
    }
    float getWeight(){return weight;}
    ~Kilogram() {}
};

class Gram
{
private:
    float weight;

public:
    Gram()
    {
        weight = 0;
    }
    Gram(float wt){
        weight = wt;
    }
    
    Gram(Kilogram kg){
        weight = kg.getWeight() * 100;
    }

    void showWeight(){
        cout << " weight : " << weight << "grams";
    }
    ~Gram(){}
};

int main()
{
    Kilogram k(1);
    Gram g;
    g = k;
    g.showWeight();

    return 0;
}