#include "player.h"
#include "enemy.h"
enemy object;

player::player()
{
    health = 100;
    mana = 100;
    energy = 100;
    focus = 100;
    rage = 100;
    player::chooseClass();
}
//chooses class and sets players name.
void player::chooseClass(){
    std::cout << "Hello, and welcome to Fight! To start, choose a class(Hunter, Warrior, Mage, or Rogue): ";
    while(true){
        std::cin >> playerClass;
        if(islower(playerClass[0])){
            playerClass[0] -= 32;
        }
        if(playerClass == "Hunter" || playerClass == "Warrior" || playerClass == "Mage" || playerClass == "Rogue")
            break;
        else{
            std::cout << "Please enter a valid class: ";
        }
    }
    std::cout << "You chose to play as a " << playerClass << ". Now choose a name: ";
    std::cin >> playerName;
    if(islower(playerName[0]))
        playerName[0] -= 32;
    std::cout << "Ok, so you're a " << playerClass << " and your name is " << playerName << ".\n";
}

void player::fight(){
    if(playerClass == "Hunter"){
        std::cout << "You have " << getHealth() << " health and " << getFocus() << " focus.\n";
    }
    else if(playerClass == "Warrior"){
        std::cout << "You have " << getHealth() << " health and " << getRage() << " rage.\n";
    }
    else if(playerClass == "Mage"){
        std::cout << "You have " << getHealth() << " health and " << getMana() << " mana.\n";
    }
    else{
        std::cout << "You have " << getHealth() << " health and " << getEnergy() << " energy.\n";
    }
    object.chooseEnemy();
    if(object.enemyClass == "Hunter"){
        std::cout << "You chose to fight a " << object.enemyClass << " with " << object.getHealth() << " health and " << object.getFocus() << " focus.\n";
    }
    else if(object.enemyClass == "Warrior"){
        std::cout << "You chose to fight a " << object.enemyClass << " with " << object.getHealth() << " health and " << object.getRage() << " rage.\n";
    }
    else if(object.enemyClass == "Mage"){
        std::cout << "You chose to fight a " << object.enemyClass << " with " << object.getHealth() << " health and " << object.getMana() << " mana.\n";
    }
    else{
        std::cout << "You chose to fight a " << object.enemyClass << " with " << object.getHealth() << " health and " << object.getEnergy() << " energy.\n";
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

void player::setHealth(int h){
    health = h;
}

void player::setMana(int m){
    mana = m;
}

void player::setEnergy(int e){
    energy = e;
}

void player::setFocus(int f){
    focus = f;
}

void player::setRage(int r){
    rage = r;
}
