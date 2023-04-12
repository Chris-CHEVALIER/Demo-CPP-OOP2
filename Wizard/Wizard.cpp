#include "Wizard.hpp"

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
}

void Wizard::castASpell() const
{
    cout << name << " lance un sort qui fait " << mana << " points de dégât." << endl;
}

void Wizard::takeManaPotion(int manaPoints)
{
    mana += manaPoints;
    if (mana > 100)
    {
        mana = 100;
    }
}

void Wizard::display() const
{
    Character::display();
    cout << "C'est un mage avec " << mana << " points de magie." << endl;
}