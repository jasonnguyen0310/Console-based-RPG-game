#ifndef HW2_GAME_HPP
#define HW2_GAME_HPP

/*
Game.hpp
Author: Jason Nguyen
Date: April 14 2021
*/

#include "Modes.hpp"
#include "State.hpp"
#include <memory>
#include <stack>
#include <unordered_map>

class Game
{
    State state_;

  public:
    Game(State &&state);

    void run();
};

#endif
