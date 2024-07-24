// By adding #ifndef PLAYERS_H, #define PLAYERS_H, and #endif around the entire content of Players.c++, you ensure that
//  the compiler only includes it once, preventing the multiple definition errors.
#ifndef PLAYERS_H
#define PLAYERS_H

#include<iostream>


#include<unistd.h>
#include<iomanip>

using namespace std;
enum userChoice {
    ROCK = 1, PAPER = 2, SCISSOR = 3
};

class Players {
private:
    unsigned int choice; // rock = 1 paper = 2 scissor = 3
public:

    Players(){}

    void setState(unsigned int ch) {
        this->choice = ch;
    }

    int getState() {
        return this->choice;
    }

    virtual void setChoice()=0;

    static void choiceInfo() {
        cout << "Enter a choice :" << endl;
        cout << "----------------------------------------------------------------------------------------"
             << endl
             << "1.Rock 2.Paper 3.Scissor" << setw(10) << endl
             << "0. Exit the Program" << endl;
        cout << "-----------------------------------------------------------------------------------------"
             << endl;
    }

    int compare(Players &p2){
        if (this->choice == p2.choice)
            return 0;
        else if ((this->choice == ROCK && p2.choice == SCISSOR) ||
                 (this->choice == PAPER && p2.choice == ROCK) ||
                 (this->choice == SCISSOR && p2.choice == ROCK))
            return 1;
        else
            return -1;
    }


   static void determineWinner(Players &p1, Players& b) {
        if ((p1.compare(b) == 0))
            cout << "It's a draw" << endl;
        else if (p1.compare(b)== 1) {
            cout << "Player wins!" << endl;
        } else {
            cout << "Bot wins!" << endl;
        }
    }

    ~Players(){};
};

#endif



