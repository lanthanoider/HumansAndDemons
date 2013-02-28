/*
 *  Elf.h
 *  14.9
 *
 *  Created by Lanthanoider on 2/28/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */
#ifdndef fantasy_elf_h
#define fantasy_elf_h

#include "creature.h"

namespace fantasy {
	
	class Elf : public Creature {
	public:
		Elf();
		Elf(int newType, int newStrength, int newHit);
		
		int getDamage();

		
	};
	
}

#endif