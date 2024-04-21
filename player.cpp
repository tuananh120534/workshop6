#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player(string name, int health, int damage) : _name(name), _health(health), _damage(damage) {}
// Player() : _name("No name"), _health(0), _damage(0){};
int Player::getHealth()
{
    return _health;
}

void Player::setHealth(int health)
{
    _health = health;
}

int Player::getDamage()
{
    return _damage;
}

void Player::setDamage(int damage)
{
    _damage = damage;
}

string Player::getName()
{
    return _name;
}

void Player::setName(string name)
{
    _name = name;
}

void Player::attack(Player *opponent, int damage)
{
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage)
{
    setHealth(getHealth() - damage);
    std::cout << _name << " takes " << damage << " damage. Remaining health: " << _health << "\n";
}