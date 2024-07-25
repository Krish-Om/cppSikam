#include <iostream>
using namespace std;
#include "Players.c++"

class Bot : public Players
{
//     enum userChoice {
//     ROCK = 1, PAPER = 2, SCISSOR = 3
// };

public:
    void setChoice() override;
    ~Bot() {};
};

void Bot::setChoice()
{
    int n = rand() % 100; // generates random value from 0 to 100
    if (n >= 0 && n < 40)
    {
        cout << "Bot chose rock🪨 " << endl;
        setState(ROCK);
    }
    else if (n > 40 && n < 60)
    {
        cout << "Bot chose paper🧻 " << endl;
        setState(PAPER);
    }
    else
    {
        cout << "Bot chose scissor✂️ " << endl;
        setState(SCISSOR);
    }
}
