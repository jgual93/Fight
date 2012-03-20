#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


class player
{
    public:
        player(int h, int m, int e, int f, int r);
        //chooses class and sets player name.
        void chooseClass();
        int getHealth()const;
        int getMana()const;
        int getEnergy()const;
        int getFocus()const;
        int getRage()const;
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
