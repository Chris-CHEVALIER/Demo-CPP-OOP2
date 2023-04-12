#include <iostream>
#pragma once
#include "../Character/Character.hpp"

using namespace std;

class Warrior : public Character
{
private:
    int atk;

public:
    Warrior(string newName, int newLife, int newAtk);
    void attack() const;
    int getAtk() const;
    void display() const;
};