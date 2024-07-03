#include <iostream>

using namespace std;


class Krishom
{
private:
    int pin;

protected:
    int bankBalance;

public:
    Krishom()
    {
        pin = 1234;
        bankBalance = 10000;
    }
    friend void getpin(Krishom &); // friend function declaration


    friend class KrishomFriend;
};

void getpin(Krishom &k)
{ // friend function
    cout << k.pin << "\n"
         << k.bankBalance << endl;
}

// Note: We can declare friend class or function anywhere in the base class body
// whether its private, protected or public block. It works all the same.

class KrishomFriend
{
public:
    void showBalance(Krishom k)
    {
        cout << "Bank Balance : " << k.bankBalance << endl;
    }
    void showPin(Krishom k)
    {
        cout << "Pin : " << k.pin << endl;
    }
};

int main()
{
    Krishom k;
    KrishomFriend kf;
    kf.showBalance(k);
    kf.showPin(k);

    cout << "friend function usage: " << endl;
    getpin(k);

    return 0;
}