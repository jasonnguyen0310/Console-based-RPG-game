#include "Game.hpp"
#include "State.hpp"

int main()
{
    State s;

    // TODO: Implement helper methods to equip items and add items to the backpack.

    // These are the items you are starting with
    auto start_weapon = s.add_item<Weapon>("Stabby dagger", 3);
    s.character.equip(start_weapon);

    auto start_armor = s.add_item<Armor>("Old sack", 1);
    s.character.equip(start_armor);

    // Add an item into the backpack
    auto fancy_robe = s.add_item<Armor>("Magic robe", 25);
    s.character.backpack.add_item(fancy_robe);

    auto armor = s.add_item<Armor>("Dragonscale armor", 200);
    s.add_encounter(Encounter(Enemy("Squeaky rat", 7, 26), armor));

    auto legendary = s.add_item<Weapon>("Demon carver", 400);
    s.add_encounter(Encounter(Enemy("Ravenous corgi", 9, 29), legendary));

    s.add_encounter(Encounter(Enemy("Ultimate destroyer of worlds", 800, 220), nullptr));

    Game g(std::move(s));

    g.run();

    return 0;
}