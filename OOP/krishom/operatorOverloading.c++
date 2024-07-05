#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        this->real = 0;
        this->imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex operator-(Complex c)
    { // inside the class definition
        Complex res;
        res.real = c.real - this->real;
        res.imag = c.imag - this->imag;

        return res;
    }
    // outside the class definition
    friend Complex operator+(Complex const &obj1, Complex const &obj2);

    void printt()
    {
        cout << this->real << endl;
        cout << this->imag << endl;
    }
};

Complex operator+(Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex A(2, 3), B(4, 5);
    Complex C = A + B;
    Complex D = A - B;
               //(A-) -> function call
// B as argument
    C.printt();
    D.printt();

    return 0;
}