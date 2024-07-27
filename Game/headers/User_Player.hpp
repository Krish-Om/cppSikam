//
// Created by krishom on 7/27/24.
//

#ifndef GAME_USER_PLAYER_HPP
#define GAME_USER_PLAYER_HPP

#include "Players.hpp"

class User_Player : public Players {
public:
    User_Player();

    void setChoice() override;

//    void roundWinner(User_Player& p1, User_Player& p2);
    ~User_Player();
};

#endif //GAME_USER_PLAYER_HPP
