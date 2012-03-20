#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


class player
{
    public:
        player();
        //chooses class and sets player name.
        void chooseClass();
    protected:
    private:
        std::string playerClass;
        std::string playerName;
        int health;//player health
        int mana;//mage resource
        int energy;//rogue resource
        int focus;//
        int rage;
};

#endif // PLAYER_H
