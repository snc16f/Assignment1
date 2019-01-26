/* 
 * File:   SharpKnife.h
 * Author: Samantha Chaves (snc16f)
 *
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef SHARPKNIFE_H
#define SHARPKNIFE_H

/**
 * Defines the behavior of a Sharp Knife(hitpoint = number >0)*/
class SharpKnife: public Weapon {
public:

    SharpKnife() : Weapon("Sharp knife", 10.0) { //Calls Weapon(name, hitpoints) constructor with values sharp knife
    }

    virtual ~SharpKnife() {};

    virtual double hit(double armor);

};

#endif /* SHARPKNIFE */

