#include <iostream>

using namespace std;

class Tola
{
private:
    double weight;

public:
    Tola() { weight = 0; }
    Tola(double w) { weight = w; }
    double getWeight() { return weight; }
    void showWeight() { cout << "Weight in tola : " << weight << " Tola"; }

    ~Tola() {}
};

class Gram
{
private:
    float weight;

public:
    Gram() { weight = 0; }
    Gram(float wt) { weight = wt; }
    Gram(Tola& t)
    {
        weight = static_cast<float>(t.getWeight() / 11.664);
    }

    void showWeight()
    {
        cout << "Weight in Grams :" << weight << " Grams";
    }

    ~Gram() {}
};

int main()
{
    Tola gold1(5);
    Gram gold2;

    gold2 = gold1;

    gold2.showWeight();
    return 0;
}