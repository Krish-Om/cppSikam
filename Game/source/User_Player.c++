#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "User_Player.hpp"

using namespace std;

    void User_Player :: setChoice()
    {
        int ch;
        static int i = 1;

        cout << "Enter your choice player" << i << ": \n"
             << endl;
        cin >> setw(1) >> ch;
        if(i == 1)
            i++;
        else if(i>=2)
            i=1;
        setState(ch);
        switch (ch)
        {
        case 1:
            cout << "You chose rock🪨 " << endl;
            break;
        case 2:
            cout << "You chose paper🧻 " << endl;
            break;
        case 3:
            cout << "You chose scissor✂️ " << endl;
            break;
        default:
            cerr << "Error :⚠️⚠️⚠️ Input Stream error ⚠️⚠️⚠️" << endl;
        }

        sleep(1);
    }


User_Player::User_Player() {}
User_Player::~User_Player() {}
