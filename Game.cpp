/*
Game.cpp
Author: Jason Nguyen
Date: April 14 2021
*/

#include "Game.hpp"
#include <iostream>
#include <string>
using namespace std;

Game::Game(State &&state) : state_(state)
{
    ModeType::Exploration e;
    ModeType::Inventory i;
    ModeType::Fighting f;
    unordered_map<const ModeType, State*> gameMap;
    gameMap.insert(make_pair(e, state_));
    gameMap.insert(make_pair(i, state_));
    gameMap.insert(make_pair(f, state_));
};

void Game::run()
{
    State s;
    string input;
    cout << "Player's Name: ";
    s.character.name = input;
    while(cin >> input)
    {
        
    }
}
