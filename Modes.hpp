#ifndef HW2_MODES_HPP
#define HW2_MODES_HPP

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
    // add methods for commands health, inventory, help and exit.
};

class ExplorationMode : public Mode
{
  public:
    static const ModeType T;

  private:
    // add methods for command explore.
};

class InventoryMode : public Mode
{
  public:
    static const ModeType T;

  private:
    // add methods for commands list, equip and close.
};

class FightingMode : public Mode
{
  public:
    static const ModeType T;

  private:
    // add methods for commands info and attack.
};

#endif
