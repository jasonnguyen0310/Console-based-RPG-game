/*
Entities.cpp
Author: Jason Nguyen
Date: April 14 2021
*/
#include "Entities.hpp"

// Any type of item that can be rewarded by completing encounters.
Item::Item(const std::string &name)
{
    name = name;
};

// virtual deconstructor for abtract base class
Item::~Item(const std::string &name)
{   
};

// An armor that reduces damage caused by enemies.
Armor::Armor(const std::string &name, int defense) : defense(defense)
{
    defense = defense;
};

// A weapon which causes damage to enemies.
Weapon::Weapon(const std::string &name, int damage) : damage(damage)
{
    damage = damage;
};


// The health of a character or enemy.
Health::Health(int hitpoints) : total_hitpoints(hitpoints), hitpoints(hitpoints)
{
    total_hitpoints = hitpoints = hitpoints;
};

// An enemy that is part of an encounter.
Enemy::Enemy(const std::string &name, int hitpoints, int damage) : name(name), health(hitpoints), damage(damage)
{
    name = name;
    health = hitpoints;
    damage = damage;
}

// An encounter in a series and some loot which the player receives upon completion.
Encounter::Encounter(const Enemy &enemy, Item *loot): enemy(enemy), loot(loot)
{
    enemy = enemy;
    loot = loot;
}