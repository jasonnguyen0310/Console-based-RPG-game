#ifndef HW2_MODES_HPP
#define HW2_MODES_HPP

/*
Modes.hpp
Author: Jason Nguyen
Date: April 14 2021
*/

#include "State.hpp"
#include <string>
#include <vector>

enum class ModeType
{
    Exploration,
    Inventory,
    Fighting
};

class Mode
{
  protected:
    // You want to have access to the state in this and all subclasses.
    State *state_{};

  public:
    virtual ~Mode() = default;

  private:
    //prints player health
    virtual void health() = 0;
    //switches to inventory mode
    virtual void inventory() = 0;
    //prints currently available commands
    virtual void help() = 0;
    //exits the game
    virtual void exit() = 0;
};

class ExplorationMode : public Mode
{
  public:
    static const ModeType T;

  private:
    //navigates to the next encounter and switches into fighting mode
    void explore();
};

class InventoryMode : public Mode
{
  public:
    static const ModeType T;

  private:
    //list items in inventory
    void list(const State &state);
    //equips a weapon or armor item from the inventory. If the character is already wearing a weapon or armor, put it in the inventory before equipping the new item.
    void equip(const State &state);
    //return to explore mode
    void close();
};

class FightingMode : public Mode
{
  public:
    static const ModeType T;

  private:
    void info(const State &state);
    void attack(const State &state);
};

#endif
