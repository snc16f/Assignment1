/*
 * File:   SimpleHammer.cpp
 * Author: Samantha Chaves(snc16f)
 *
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
    if(armor<30){
        double damage = hitPoints;   //ignore all armor points if armor is less than 30
        if(damage < 0)
            return 0;
        
        return damage;
    }
    else
    {
        double damage = hitPoints-armor;			//does not ignore
        if(damage < 0)
            return 0;
        
        return damage;
    }
}
