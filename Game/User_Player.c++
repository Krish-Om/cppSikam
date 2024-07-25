#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

#include "Players.c++"

class User_Player : public Players
{
public:
    User_Player() {}
    void setChoice() override
    {
        int ch;
        // static int i = 1;
        cout << "Enter your choice player: \n"
             << endl;
        cin >> setw(1) >> ch;
        setState(ch);
        // i++;
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

    ~User_Player() {}
};
