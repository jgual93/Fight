#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <iostream>
#include <ctype.h>

class enemy
{
    public:
        enemy();
        void chooseEnemy();
        int getHealth()const;
        int getMana()const;
        int getEnergy()const;
        int getFocus()const;
        int getRage()const;
        void setHealth(int h);
        void setMana(int m);
        void setEnergy(int e);
        void setFocus(int f);
        void setRage(int r);
        std::string enemyClass;
    protected:
    private:
        int health; //player health
        int mana;   //mage resource
        int energy; //rogue resource
        int focus;  //hunter resource
        int rage;   //warrior resource
};

#endif // ENEMY_H
