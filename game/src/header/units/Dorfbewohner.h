/*
 * Dorfbewohner.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef DORFBEWOHNER_H_
#define DORFBEWOHNER_H_

#include <vector>

#include "units/Lebewesen.h"
#include "misc/Inventar.h"

class Dorfbewohner: public Lebewesen {
  private :
    unsigned int[] berufe; // xp listen

    Beruf aktBeruf; // der aktuelle beruf
    Gebaeude* arbeitsGebaeude; // das gebaeude an dem er arbeitet

    Inventar inventar; // die items die er im inventar hat

  public :

};


#endif /* DORFBEWOHNER_H_ */
