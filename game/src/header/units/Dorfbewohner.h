/*
 * Dorfbewohner.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef DORFBEWOHNER_H_
#define DORFBEWOHNER_H_

#include <vector>
#include <queue>

class Dorfbewohner {
  private :
    Gender geschlecht;
    unsigned int[] berufe; // xp listen
    Beruf* aktBeruf; // der aktuelle beruf
    Gebaeude* arbeitsGebaeude;
    std::queue<Aktion> aktAktion;
    std::vector<Aura> auren;
  public :

};


#endif /* DORFBEWOHNER_H_ */
