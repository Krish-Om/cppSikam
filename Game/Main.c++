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

protected:
    void setState(int state) {
        states = state;
    }

    int getState() {
        return states;
    }

public:
    static void choiceInfo() {
        cout << "\t\t\t\tEnter a choice between 1 and 2" << endl;
        cout << "\t\t\t\t----------------------------------------------------------------------------------------"
             << endl
             << "\t\t\t\t1. Rock 2. Paper 3. Scissor" << setw(10) << endl
             << "\t\t\t\t0. Exit the Program" << endl;
        cout << "\t\t\t\t-----------------------------------------------------------------------------------------"
             << endl;
    }

    void printModeInfo() {
    }
};

class Player : private Choices {
public:

    Player() =default;

    void takeInput() {
        int ch=0;
        cout <<"Enter your choice : \n"<<endl;
        cin >> setw(1)>>ch;
        setState(ch);
    }

    bool operator=(Player &p) {
        return p.getState() == this->getState();
    }

    ~Player()=default;

};

void decision() {

}

class Game {
private:
public:
    Player p1, p2;

    Game() {
        p1.takeInput();
        decision();
        sleep(0.5);
        p2.takeInput();
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
