#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard : public Player
{
protected:
    int _mana;

public:
    Wizard(string name, int health, int damage, int mana);


    void castSpell(Player *opponent);
};

#endif