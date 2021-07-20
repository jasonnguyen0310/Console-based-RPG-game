# Console based RPG game
Console-based RPG game written in [C++](https://www.cplusplus.com/).


## Role Playing Game (RPG)
Ever wonder how the games from today's generation create an immersive experience with developing storylines, impactful decision making, and astounding graphics came to be? This project focuses on developing a console based RPG Game that allows the user to make decisions that ultimately affect the outcome of their game. The player can control a character to manage their inventory and fight enemies in a turn-based manner. The player controls the character by issuing commands. Depending on in what context you are in, different commands are available. This context is determined by the current mode. There are three modes: exploration, inventory and fighting. There are also some commands that are always available, like checking the players health, listing available commands or exiting the game.

To win the game, the player must defeat enemies in a series of encounters. Every encounter presents one enemy and the possibility of acquiring some new equipment upon defeating the enemy. If the player's hit points fall to zero, the game is over.

In order for us to be able to grade reliably, there won't be any randomness in the game. The starter code contains some initial state and encounters that our tests are based on. Please do not modify them or restore them before submitting.

## Object Oriented Programming
Role Playing Games all start from somewhere and what better to understand Object Oriented Programming then developing a RPG game! This project focuses on understanding the concepts of objects, class methods, class variables, and polymorphism. 

## Entities and Game States
All entity objects are confined into one game state, where the user can make decisions based on their character. Class methods and polymorphism allow users to ignore the low-level details of implementation and focus on the individual methods that work together like a well-oiled machine to create a holistic game experience.

## Base mode commands
The commands are always available:

health: prints player health  inventory: switches to inventory mode  help: prints currently available commands  exit: exits the game

## Exploration mode commands
This is the default mode after starting the game.

explore: navigates to the next encounter and switches into fighting mode

## Inventory mode commands
list: list items in inventory
equip: equips a weapon or armor item from the inventory. If the character is already wearing a weapon or armor, put it in the inventory before equipping the new item.
close: return to explore mode
Fighting mode commands
info: view enemy health
attack: attacks the enemy. This reduces the enemy's hitpoints by the damage of your weapon. The character's hitpoints get reduced by the damage of the enemy minus the defense of the currently worn armor (this can't be negative of course). If the character's hitpoints go below zero, you loose. If the enemy's hitpoints go below zero, you win this encounter and are rewarded with the loot. If this was the last encounter, you win the game and the game ends.
