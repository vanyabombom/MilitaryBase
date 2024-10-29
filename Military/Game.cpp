#include "Game.h"
using namespace std;

void Game::drawStats()
{
    cout << "BASE STATS" << endl;
    cout << "People: " << Base::people_on_base << endl;
    cout << "Vehicles: " << Base::vehicles_on_base << endl;
    cout << "Petrol: " << Base::petrol_on_base << "litres" << endl;
    cout << "Goods: " << Base::goods_on_base << endl;
}

void Game::showMenu()
{
    drawStats();
    cout << "\nMENU\n";
    cout << "1. Bus Arrive\n";
    cout << "2. Truck Arrive\n";
    cout << "3. Bus Leave\n";
    cout << "4. Truck Leave\n";
    cout << "5. Exit\n";
    cout << "Enter choice: ";
    string choice;
    cin >> choice;
    if (choice == "1")
    {
        busArrive();
    }
    else if (choice == "2")
    {
        truckArrive();
    }
    else if (choice == "3")
    {
        busLeave();
    }
    else if (choice == "4")
    {
        truckLeave();
    }
    else if (choice == "5")
    {
        cout << "Exiting\n";
        return;
    }
}

void Game::busArrive()
{
    cout << "Bus is coming\n";
    bus.arrive();
    waitForEnter();
}

void Game::truckArrive()
{
    cout << "Truck is coming\n";
    truck.arrive();
    waitForEnter();
}

void Game::busLeave()
{
    cout << "Bus is leaving\n";
    if (!bus.leave())
    {
        cout << "Error. Bus failed to leave.\n";
    }
    waitForEnter();
}

void Game::truckLeave()
{
    cout << "Truck is leaving\n";
    if (!truck.leave())
    {
        cout << "Error. Truck failed to leave.\n";
    }
    waitForEnter();
}

void Game::waitForEnter()
{
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}


