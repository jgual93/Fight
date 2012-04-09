#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <ctype.h>

class player
{
    public:
        player();
        //chooses class and sets player name.
        void chooseClass();
        void fight();
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
    protected:
    private:
        std::string playerClass;
        std::string playerName;
        int health; //player health
        int mana;   //mage resource
        int energy; //rogue resource
        int focus;  //hunter resource
        int rage;   //warrior resource

};

#endif // PLAYER_H
