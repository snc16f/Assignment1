
/*
 * File:   CrazyRandomSword.cpp
 * Author: Samantha Chaves(snc16f)
 *
 */

#include "CrazyRandomSword.h"
#include <cmath>

double CrazyRandomSword::hit(double armor){
    int randhitnum=rand() % 94 + 7;
    hitPoints=randhitnum;

    int randnum= rand() % (int)(armor*.3333) + 2;  //create a number from 2 to 1/3 of the armor hit
    
    double damage = hitPoints-randnum;
    
    if(damage < 0){
        return 0;
    }
    return damage;
}
