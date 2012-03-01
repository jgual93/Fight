#include <iostream>
using namespace std;

int main(){
    string playerClass;
    string playerName = "";

    cout << "Hello, and welcome to Fight! To start, choose a class(Hunter, Warrior, Mage, or Rogue): ";
    cin >> playerClass;
    if(playerClass == "hunter" || playerClass == "Hunter" || playerClass == "warrior" || playerClass == "Warrior" || playerClass == "mage" || playerClass == "Mage" || playerClass == "rogue" || playerClass == "Rogue"){
    playerClass[0] -= 32;
    cout << "You chose to play as a " << playerClass << ". Now choose a name: ";
    cin >> playerName;
    }
    else




    return 0;
}
