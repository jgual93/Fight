#include "player.h"

player::player(int h, int m, int e, int f, int r)
{
    health = h;
    mana = m;
    energy = e;
    focus = f;
    rage = r;
}
//chooses class and sets players name.
void player::chooseClass(){
    std::cout << "Hello, and welcome to Fight! To start, choose a class(Hunter, Warrior, Mage, or Rogue): ";
    while(true){
    std::cin >> playerClass;
    if(playerClass == "hunter" || playerClass == "warrior" || playerClass == "mage" || playerClass == "rogue"){
        playerClass[0] -= 32;
        std::cout << "You chose to play as a " << playerClass << ". Now choose a name: ";
        std::cin >> playerName;
        break;
    }
    else if(playerClass == "Hunter" || playerClass == "Warrior" || playerClass == "Mage" || playerClass == "Rogue"){
        std::cout << "You chose to play as a " << playerClass << ". Now choose a name: ";
        std::cin >> playerName;
        break;
    }
    else
        std::cout << "Please enter a valid class: ";
    }
}

int player::getHealth()const{
    return health;
}

int player::getMana()const{
    return mana;
}

int player::getEnergy()const{
    return energy;

}

int player::getFocus()const{
    return focus;
}

int player::getRage()const{
    return rage;
}
