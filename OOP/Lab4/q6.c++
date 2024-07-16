#include <iostream>

using namespace std;
class Integer
{
private:
    int value;

public:
    Integer()
    {
        value = 0;
    }
    Integer(int i)
    {
        value = i;
    }
    void operator --(int) //postfix
    {
        value--;
    }

    void operator --(){//prefix
        --value;
    }
    int getValue() { return value; };
    ~Integer(){};
};
int main()
{
    Integer i(10);
    --i;
    cout << i.getValue()<<endl;
    i--;
    cout << i.getValue();
    return 0;
}