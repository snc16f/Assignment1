/* 
 * File:   CrazyRandomSword.h
 * Author: Samantha Chaves (snc16f)
 *
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Crazy Random Sword (hitpoint = random integer number between 7 and 100, ignores random amount og armor points ranging from 2 to 1/3 of the hits)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", int num= rand() % 94 + 7) { //Calls Weapon(name, hitpoints) constructor with values Crazy random sword and random number
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD */
