#include <iostream>
#include "player.h"


int main(){
    player a(100,100,100,100,100);

    a.chooseClass();
    std::cout << a.getHealth();
    std::cout << a.getMana();
    std::cout << a.getEnergy();
    std::cout << a.getFocus();
    std::cout << a.getRage();


    return 0;
}
