
/* 
 * File:   SharpKnife.cpp
 * Author: Samantha Chaves(snc16f)
 *  
 */

#include "SharpKnife.h"


double SharpKnife::hit(double armor){
	double damage = hitPoints - (armor * 0.6);  //*****
		
	
    if(damage < 0){
        return 0;
    }
    return damage;
}