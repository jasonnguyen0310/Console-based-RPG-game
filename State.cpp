/*
State.cpp
Author: Jason Nguyen
Date: April 14 2021
*/
#include "State.hpp"

// This is a variadic template: it takes an arbitrary number of arguments...
template <typename T, typename... Args> T State::*add_item(Args... args)
{
    // ... which we can pass to make_unique (which is also variadic) here.
    // make_unique creates a unique_ptr and by calling the constructor with args...
    auto item = std::make_unique<T>(args...);
    auto ptr = item.get();
    // Store the item in the vector so they are automatically deallocated when state is deallocated.
    items.push_back(move(item));
    return ptr;
}

void State::add_encounter(const Encounter &encounter)
{
    encounters.push(encounter);
}