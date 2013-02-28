/*
 *  creature.cpp
 *  14.9
 *
 *  Created by Lanthanoider on 2/28/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include <string>
#include "creature.h"

using std::string;
using std::cout;


namespace fantasy {

	creature::Creature():creatureName("Human"), strength (10), hitpoints(10)
	{
		
	}
	
	creature::Creature(int newType, int newStrength, int newHit):creatureName(newType), strength(newStrength), hitpoints(newHit) 
	{
		
	
	}
	
	string Creature::getCreatureName() const {
		
		return creatureName;
	
	}
	
	int Creature::getStrength() const {
	
		return strength;
	
	}
	
	int Creature::getHitpoints() const {
	
		return hitpoints;
		
	}
	
	void Creature::setName(const string& newCreatureName) {
		
		creatureName = newCreatureName;
	
	}
	
	void Creature::setStrength(const int newCreatureStrength) {
	
		strength = newCreatureStrength;
	
	}
	
	void Creature::setHitpoints (const int newCreatureHitpoints) {
	
		hitpoints = newCreatureHitpoints;
	
	}
	

	int Creature::getDamage() {
		int damage;
		
		damage = (rand() % strength) + 1;
		std::cout << creatureName << "attacks for" << damage << "points!" << endl;
		
		return damage;
	
	}
	
	
	
	
}