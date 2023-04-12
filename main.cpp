#include "Character/Character.cpp"
#include "Wizard/Wizard.cpp"
#include "Warrior/Warrior.cpp"

int main()
{
    Character ilyes("Ilyes", 100);
    ilyes.display();

    Wizard chris("Chris", 120, 80);
    chris.display();

    Warrior othmane("Othmane", 150, 150);
    othmane.display();
    
    return 0;
}