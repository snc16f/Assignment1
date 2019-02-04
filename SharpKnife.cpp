
/*
 * File:   SharpKnife.cpp
 * Author: Samantha Chaves(snc16f)
 *
 */

#include "SharpKnife.h"


double SharpKnife::hit(double armor){
    double damage = hitPoints - (armor * 0.6);  //ignores 60% of armor points
    
    if(damage < 0){
        return hitPoints*.5;  //return half the amount of hitpoints you started with
    }
    return damage;
}
