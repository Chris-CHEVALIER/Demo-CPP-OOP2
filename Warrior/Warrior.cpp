#include "Warrior.hpp"

Warrior::Warrior(string newName, int newLife, int newAtk) : Character(newName, newLife)
{
    atk = newAtk;
}

void Warrior::attack() const
{
    cout << name << " attaque et fait " << atk << " points de dégât !" << endl;
}

int Warrior::getAtk() const
{
    return atk;
}

void Warrior::display() const
{
    Character::display();
    cout << "C'est un guerrier avec " << atk << " points d'attaque." << endl;
}