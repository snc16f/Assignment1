
/* 
 * File:   SimpleHammer.h
 * Author: Samantha Chaves (snc16f)
 *
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a Simple Hammer (hitpoint = 25, armor<30, ignore)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("SimpleHammer", 25) { //Calls Weapon(name, hitpoints) constructor with values Simple hammer
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER */
