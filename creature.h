/*
 *  creature.h
 *  14.9
 *
 *  Created by Lanthanoider on 2/28/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#ifdndef fantasy_creature_h
#define fantasy_creature_h

#include <string>
#include <iostream>

namespace fantasy {

	class Creature
	{
	private:
		string creatureName;
		int strength;
		int hitpoints;
	public:
		Creature();
		Creature(int newType, int newStrength, int newHit);
		string getCreatureName() const;
		int getStrength() const;
		int getHitpoints() const;
		void setName(const string& newCreatureName); 
		void setStrength(const int newCreatureStrength);
		void setHitpoints (const int newCreatureHitpoints);
		int getDamage();
		
	};

}

#endif