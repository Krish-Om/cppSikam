//
// Created by krishom on 7/27/24.
//
#ifndef GAME_GAME_HPP
#define GAME_GAME_HPP

#include "User_Player.hpp"
#include "Bot.hpp"
class Game{
public:
    Game();

    Game(User_Player &p, Bot &b);

    void init();
    void singlePlayer();
    void multiPlayer();
    void modeSelection();
    void roundSelection();
    void startGame();
    void startGame(User_Player&,User_Player&);
    void Outro(int);
    void playAgain();

private:
    unsigned int rounds{};
    User_Player player;
    Bot bot;
};

#endif //GAME_GAME_HPP
