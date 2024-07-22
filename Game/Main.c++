#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

#include <ctime>
// #include <windows.h> //uncomment this part if your OS is Windows
using namespace std;

void clearScreen() {
    if (isatty(STDOUT_FILENO)) {
        system("clear || cls");
    } else {
        cerr << " No terminal detected " << endl;
    }
}

class Choices {
private:
    int states; // rock = 1 scissor = 2 paper = 3

public:
    void setState(int state) {
        states = state;
    }

    int getState() {
        return states;
    }

    static void choiceInfo() {
        cout << "Enter a choice between 1 and 2" << endl;
        cout << "----------------------------------------------------------------------------------------"
             << endl
             << "1. Rock 2. Paper 3. Scissor" << setw(10) << endl
             << "0. Exit the Program" << endl;
        cout << "-----------------------------------------------------------------------------------------"
             << endl;
    }

    void printModeInfo() {
    }
};

class Player : public Choices {
public:

    Player() = default;

    void takeInput() {
        int ch = 0;
        static int i=1;
        cout << "Enter your choice p"<<i<<": \n" << endl;
        cin >> setw(1) >> ch;
        setState(ch);
        i++;
    }

    ~Player() = default;

};

void p1Wins() {
    cout << "Player 1 wins !" << endl;
}

void compare(Player &p1, Player &p2) {

    // rock = 1 scissor = 2 paper = 3

    if (p1.getState() == p2.getState()) {
        cout << " Draw !" << endl;
    }
    if (p1.getState() == 2 && p2.getState() == 3) {
        p1Wins();
    }
    if (p1.getState() == 1 && p2.getState() == 2) {
        p1Wins();
    }
    if (p1.getState() == 3 && p2.getState() == 1) {
        p1Wins();
    }
}

class Game {
public:
    Player p1, p2;

    Game() {
        Choices :: choiceInfo();
        p1.takeInput();
        clearScreen();
        Choices :: choiceInfo();
        p2.takeInput();
        
        compare(p1, p2);
    }
};

int main() {
    Game g;
    return 0;
}


//void start()
//{
//    int ch;
//    Choices::choiceInfo();
//    while (1)
//    {
//        cin >> ch;
//        switch (ch)
//        {
//            case 1:
//
//                sleep(3);
//                Choices::choiceInfo();
//                clearScreen();
//                break;
//            case 2:
//                cout << "Player chose 2 " << endl;
//                clearScreen();
//                Choices::choiceInfo();
//                break;
//            case 0:
//                cout << "Exiting the program  " << endl;
//                exit(0);
//                break;
//            default:
//                break;
//        }
//    }
//}
