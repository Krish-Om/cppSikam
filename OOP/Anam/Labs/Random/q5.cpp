#include<iostream>
#include<string>

using namespace std;

class Bank{

    private:
    string name;
    string acc_type;
    string acc_no;

    public:
    Bank(string a, string b, string c): name(a), acc_type(b), acc_no(c)
    {

    }
    void display()
    {
        cout << "Name: " << name << ", Account type: " << acc_type << ", Account number: " << acc_no << endl;
    }
};
int main(){

        string n, a;
        string no;

        cout << "Enter name: ";
        cin >> n;       
         cout << "Enter account type: ";
        cin >> a;
        cout << "Enter account number: ";
        cin >> no;
        Bank b1(n, a, no);

        cout << "\nDisplaying the account details:\n";
        b1.display();
        return 0;
}  