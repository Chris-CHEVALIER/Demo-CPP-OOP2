#include <iostream>
#pragma once
#include "../Character/Character.hpp"

using namespace std;

class Wizard : public Character
{
private:
    int mana;

public:
    Wizard(string newName, int newLife, int newMana);
    void castASpell() const;
    void takeManaPotion(int manaPoints);
    void display() const;
};