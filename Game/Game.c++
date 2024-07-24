#include <iostream>

#include "User_Player.c++"
#include "Bot.c++"

using namespace std;

void clearScreen()
{
    if (isatty(STDOUT_FILENO))
    {
        system("clear || cls");
    }
    else
    {
        cerr << " No terminal detected " << endl;
    }
}
void init();
class Game
{
private:
    unsigned int rounds;
    User_Player player;
    Bot bot;

public:

    Game(){
        playRound();
    }

    Game(User_Player& p, Bot& b)
    {
        this->player = p;
        this->bot = b;
        rounds = 1;
    }

    void playRound()
    {
        Players ::choiceInfo();
        player.setChoice();
        // clearScreen();
        bot.setChoice();

        int result = player.compare(bot);
        if (result == 0)
           cout << " :0 It's a Draw! :0" << endl;
       else if (result == 1)
           cout << ":) Congratulation! You are the final winner! :)" << endl;
       else
           cout << ":( Computer is the final winner! and You lose :(" << endl;
    }

};



