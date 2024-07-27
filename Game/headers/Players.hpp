//
// Created by krishom on 7/27/24.
//

#ifndef GAME_PLAYERS_HPP
#define GAME_PLAYERS_HPP

enum userChoice {
    ROCK = 1, PAPER = 2, SCISSOR = 3
};

class Players {
private:
    unsigned int choice;
public:
    Players();
    void setState(unsigned int ch);
    int getState();
    virtual void setChoice() = 0;
    static void choiceInfo();
    int compare(Players &p2);
    static void determineWinner(Players &p1, Players &b);
    virtual ~Players();
};

#endif //GAME_PLAYERS_HPP