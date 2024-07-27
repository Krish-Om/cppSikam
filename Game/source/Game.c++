#include <iostream>
#include "unistd.h"
#include "Game.hpp"
#include "User_Player.hpp"
#include "Bot.hpp"


using namespace std;
//helper functions
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
void roundWinner(int res, int nround)
{
    if (res == 0)
        cout << " 😅 Round " << nround + 1 << ": is Draw!" << endl;
    else if (res == 1)
        cout
                << "🤩 Round " << nround + 1 << ": you won!" << endl;
    else
        cout << "🥲 Round " << nround + 1 << ": you lose!" << endl;
}

Game ::Game()
{ // default best of 3 mode
    init();
}

Game :: Game(User_Player &p, Bot &b)
{
    this->player = p;
    this->bot = b;
    rounds = 3;
}

void Game ::init()
{
    modeSelection();
}

void Game::modeSelection()
{
    int mode;
    cout << "Please select your mode :" << endl;
    cout << "0. Player vs Bot\t 1. Player vs Player" << endl;
    cin >> mode;
    if (mode == 0 || mode == 1)
    {

        switch (mode)
        {
        case 0:
            // singleplayer mode
            this->singlePlayer();
            break;
        case 1:
            // multiplayer mode
            this->multiPlayer();
            break;
        default:
            cout << "⚠️⚠️⚠️ Input Error : Invalid mode selected ⚠️⚠️⚠️" << endl;
            cout << "Please re-enter the mode: " << endl;
            cin >> mode;
            break;
        }
    }
}

void Game::roundSelection()
{
    clearScreen();
    int rmode;
    cout << "Please choose the round-mode you want to play:\n 1.Default(Best of 3 rounds)\t 2.Custom no. of rounds" << endl;
    cin >> rmode;
    switch (rmode)
    {
    case 1:
        this->rounds =3;
        break;
    case 2:
        // customized no of rounds
        cout << "Please enter the number of rounds you want to play :" << endl;
        cin >> this->rounds;
        if (this->rounds < 1)
        {
            cout << "Error : User Input for rounds may have been less than 1 or negative!!! " << endl;
            cout << "Please re-enter the number of rounds you want to play :" << endl;
            cin >> this->rounds;
            break;
        }
        else
            break;
    default:
        cerr << "Invalid User Choice" << endl;
        cout << "Please re-choose the round mode correctly !" << endl;
        cin >> rmode;
        break;
    }
}

void Game ::singlePlayer()
{
    this->roundSelection(); // rounds = 3
    this->startGame();
}

void Game::multiPlayer() {
    this->roundSelection();
    User_Player p1,p2;
    this->startGame(p1,p2);
}
void Game ::startGame(User_Player& p1, User_Player& p2) {
    int i;
    for (i = 0; i < this->rounds; i++)
    {
        Players::choiceInfo();
        p1.setChoice();
        clearScreen();

        Players::choiceInfo();
        p2.setChoice();
        clearScreen();

        int result = p1.compare(p2);
        roundWinner(result, i);
    }
    this->Outro(i);
}
void Game ::startGame()
{
    int i;
    for (i = 0; i < this->rounds; i++)
    {
        Players::choiceInfo();
        player.setChoice();
        clearScreen();
        bot.setChoice();

        int result = player.compare(bot);
        roundWinner(result, i);
    }
    this->Outro(i);
}

void Game::Outro(int nround)
{
    if (nround == this->rounds)
    {

        this->playAgain();
    }
    else
    {
        cout << "😇😇😇 Thank you for Playing! Hope you enjoyed it. 😇😇😇" << endl;
        exit(0);
    }
}
void Game::playAgain()
{
    clearScreen();
    cout << "Would like to give an another go ?😁😁😁" << endl;
    cout << "yes(y) or anyother character" << endl;
    char ch;
    cin >> ch;
    if (ch == 'y')
    {
        new Game();
    }
    else
    {
        cout << "😇😇😇 Thank you for Playing! Hope you enjoyed it. 😇😇😇" << endl;
        exit(0);
    }
}