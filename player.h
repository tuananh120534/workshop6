#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
protected:
    string _name;
    int _health;
    int _damage;

public:
    Player(string name, int health, int damage);
    // Player() : _name("No name"), _health(0), _damage(0){};
    int getHealth();

    void setHealth(int health);

    int getDamage();

    void setDamage(int damage);

    string getName();

    void setName(string name);

    void attack(Player *opponent, int damage);

    void takeDamage(int damage);

    ~Player(){};
};

#endif