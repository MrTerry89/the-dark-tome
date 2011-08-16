/*
 * Tier.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef TIER_H_
#define TIER_H_

#include "units/Lebewesen.h"

class Tier : public Lebewesen {
    unsigned int akt_nahrung;
    unsigned int max_nahrung;
};


#endif /* TIER_H_ */
