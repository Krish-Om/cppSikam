#include <iostream>

using namespace std;
class Matrix
{
private:
    int data[3][3];

public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                data[i][j] = 0;
            }
        }
    }
    void fillMatrix()
    {
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                cin >> data[i][j];
            }
        }
    }
    Matrix operator+(Matrix &m)
    {
        Matrix sum;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum.data[i][j] = data[i][j] + m.data[i][j];
            }
        }

        return sum;
    }

    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
                cout << " " << data[i][j];
        }
    }
    ~Matrix() {}
};

int main()
{
    Matrix A, B, Sum;

    cout << "Enter the elements of the 3x3 matrix A: \n";

    A.fillMatrix();

    cout << "Enter the elements of the 3x3 matrix B: \n";
    B.fillMatrix();

    Sum = A + B;
    Sum.display();
    return 0;
}