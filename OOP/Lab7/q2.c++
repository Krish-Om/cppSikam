#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

int main() {
    char buffer[500];
    try {
        ifstream file1("foo1.txt", ios::in); // read mode
        ofstream file2("foo2.txt", ios::out); // write mode

        if (!file1.is_open() || !file2.is_open()) {
            throw runtime_error("Failed to open file");
        }

        while (file1.read(buffer, sizeof(buffer))) {
            file2.write(buffer, file1.gcount());
        }

        // Write any remaining characters in the buffer
        if (file1.gcount() > 0) {
            file2.write(buffer, file1.gcount());
        }

        file1.close();
        file2.close();
        cout << "Success!" << endl;

    } catch (const exception &e) {
        cerr << e.what() << endl;
    }

    return 0;
}
