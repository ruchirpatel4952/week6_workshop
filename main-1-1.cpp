#include "wizard.h"
#include "warrior.h"
#include<iostream>

int main() {
    Wizard wizard("Gandalf", 100, 10, 50);  // Increased damage to ensure the wizard wins
Warrior warrior("Aragorn", 120, 12, "Sword");

    std::cout << "Let the battle begin!\n";

    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " has been defeated!\n";
            break;
        }

        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " has been defeated!\n";
            break;
        }
    }

    std::cout << "Battle ended.\n";

    return 0;
}
