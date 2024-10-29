#pragma once
#include "Base.h"
#include "Bus.h"
#include "Truck.h"

class Game
{
public:
    void drawStats();
    void showMenu();

private:
    Bus bus{ 15, 50, 100, 200 };
    Truck truck{ 30, 100, 200, 300 };
    void busArrive();
    void truckArrive();
    void busLeave();
    void truckLeave();
    void waitForEnter();
};