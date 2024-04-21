#include <string>
#include <iostream>
#include "warrior.h"
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage)
{
    this->_weapon = weapon;
}

void Warrior::swingWeapon(Player *opponent)
{

    opponent->takeDamage(_damage);
    std::cout << _name << " swings their " << _weapon << " at " << opponent->getName() << "!\n";
}