#include <iostream>
#include <string>

using namespace std;

class Item {

private:
    string name;
    string code;
    float price;
public:
    Item(string n, string c, float p)  {

        name=n;
        code=c;
        price=p;

    }

    Item() {
        name = "";
        code = "";
        price = 0;
    }

    void display() {
        cout << "Name: " << name << ", Code: " << code << ", Price: " << price << endl;
    }
};

int main() {

    Item items[10];


    for (int i = 0; i < 10; i++) {
        cout << "Enter details for item " << i + 1 << ":\n";
        string name, code;
        float price;

        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;

        items[i] = Item(name, code, price);
    }

    cout << "\nDisplaying the items:\n";
    for (int i = 0; i < 10; i++) {
        items[i].display();
    }

    return 0;
}
