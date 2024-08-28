#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream inputFile("foo1.txt");

    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    // Perform file operations
    int num;
    inputFile >> num;

    if (inputFile.fail()) {
        cerr << "Error reading from the file." << endl;
        return 1;
    }

    // Check for end-of-file
    if (inputFile.eof()) {
        cout << "End of file reached." << endl;
    }

    // Check for bad state
    if (inputFile.bad()) {
        cerr << "Bad state encountered while reading the file." << endl;
        return 1;
    }

    // Check if the stream is in good state
    if (inputFile.good()) {
        cout << "File operations completed successfully." << endl;
    }

    inputFile.close();

    return 0;
}