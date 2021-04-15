#ifndef HW2_ENTITIES_HPP
#define HW2_ENTITIES_HPP

/*
Entities.hpp
Author: Jason Nguyen
Date: April 14 2021
*/

#include <string>
#include <vector>

// TODO: add constructors and helper methods you need (you are free to modify all entities as you see fit)

// Any type of item that can be rewarded by completing encounters.
struct Item
{
    std::string name;

    explicit Item(const std::string &name);

    // always define a virtual deconstructor in base classes
    virtual ~Item() = default;
};

// An armor that reduces damage caused by enemies.
struct Armor : public Item
{
    // Subtract this from incoming damage to the player if equipped.
    int defense;

    Armor(const std::string &name, int defense);
};

// A weapon which causes damage to enemies.
struct Weapon : public Item
{
    // Damage dealt on attacking an enemy.
    int damage;

    Weapon(const std::string &name, int damage);
};

// The health of a character or enemy.
struct Health
{
    // Current hitpoints of character or enemy.
    int hitpoints;
    // Total hitpoints of character or enemy.
    int total_hitpoints;

    // Initialize hitpoints and total_hitpoints to the same value, because a character or enemy always starts with full
    // hitpoints.
    explicit Health(int hitpoints);
};

// Items the character has collected but not currently equipped.
struct Backpack
{
    // The items stored in the character's backpack.
    std::vector<Item *> items;
};

// The character controlled by the player.
struct Character
{
    std::string name;
    // Character has 100 hitpoints.
    Health health{100};

    Backpack backpack;
    // Currently wielded weapon.
    Weapon *weapon{};
    // Currently worn armor.
    Armor *armor{};
};

// An enemy that is part of an encounter.
struct Enemy
{
    std::string name;
    Health health;
    // Damage dealt on attack.
    int damage;

    Enemy(const std::string &name, int hitpoints, int damage);
};

// An encounter in a series and some loot which the player receives upon completion.
struct Encounter
{
    // Enemy of the encounter.
    Enemy enemy;
    // Possible loot dropped when killing the enemy.
    Item *loot;

    Encounter(const Enemy &enemy, Item *loot);
};

#endif
