#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    int y;

protected:
    int z;
};

class B : public A
{
    void updateY()
    {
        y = 10;
        z=10;
    }
};

class C : private A
{
    void update(){
        y=20;
        z=20;
    }

};

class D : protected A
{
    void update(){
        y=30;
        z=30;
    }
};

int main()
{
    B b;
    b.y;
    // b.z;

    return 0;
}