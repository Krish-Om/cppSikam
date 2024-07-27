// By adding #ifndef PLAYERS_H, #define PLAYERS_H, and #endif around the entire content of Players.c++, you ensure that
//  the compiler only includes it once, preventing the multiple definition errors.


#include<iostream>
#include<iomanip>

using namespace std;
#include "Players.hpp"
// rock = 1 paper = 2 scissor = 3


    Players :: Players(){}

    void Players :: setState(unsigned int ch) {
        this->choice = ch;
    }

    int Players :: getState() {
        return this->choice;
    }

     void Players :: choiceInfo() {
        cout << "\nEnter a choice :" << endl;
        cout << "----------------------------------------------------------------------------------------"
             << endl
             << "1.Rock🪨 2.Paper🧻 3.Scissor✂️" << setw(10) << endl;
        cout << "-----------------------------------------------------------------------------------------"
             << endl;
    }

    int Players :: compare(Players &p2)  {
        if (this->choice == p2.choice)
            return 0;
        else if ((this->choice == ROCK && p2.choice == SCISSOR) ||
                 (this->choice == PAPER && p2.choice == ROCK) ||
                 (this->choice == SCISSOR && p2.choice == ROCK))
            return 1;
        else
            return -1;
    }


   void Players ::  determineWinner(Players &p1, Players& b) {
        if ((p1.compare(b) == 0))
            cout << "It's a draw" << endl;
        else if (p1.compare(b)== 1) {
            cout << "Player wins!" << endl;
        } else {
            cout << "Bot wins!" << endl;
        }
    }

    Players::~Players(){}






