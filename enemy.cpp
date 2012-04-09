#include "enemy.h"

enemy::enemy()
{
    health = 100;
    mana = 100;
    energy = 100;
    focus = 100;
    rage = 100;
}

void enemy::chooseEnemy(){
    std::cout << "Now choose an enemy class to fight against: ";
    while(true){
        std::cin >> enemyClass;
        if(islower(enemyClass[0])){
            enemyClass[0] -= 32;
        }
        if(enemyClass == "Hunter" || enemyClass == "Warrior" || enemyClass == "Mage" || enemyClass == "Rogue")
            break;
        else{
            std::cout << "Please enter a valid enemy class: ";
        }
    }
}

int enemy::getHealth()const{
    return health;
}

int enemy::getMana()const{
    return mana;
}

int enemy::getEnergy()const{
    return energy;

}

int enemy::getFocus()const{
    return focus;
}

int enemy::getRage()const{
    return rage;
}

void enemy::setHealth(int h){
    health = h;
}

void enemy::setMana(int m){
    mana = m;
}

void enemy::setEnergy(int e){
    energy = e;
}

void enemy::setFocus(int f){
    focus = f;
}

void enemy::setRage(int r){
    rage = r;
}
