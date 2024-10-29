#include "Game.h"
#include <ctime> 
#include <iostream>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    Base::people_on_base = rand() % 50;
    Base::vehicles_on_base = rand() % 10;
    Base::petrol_on_base = rand() % 300;
    Base::goods_on_base = rand() % 150;

    Game game;
    game.showMenu();

}
