/*
 * Lebewesen.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef LEBEWESEN_H_
#define LEBEWESEN_H_

#include <vector>
#include <queue>

class Lebenwesen {

  private :
    bool isLebend;
    Gender geschlecht;
    unsigned int maxLeben;
    unsigned int leben;
    unsigned int min_angriff;
    unsigned int max_angriff;
    unsigned int angriffs_geschwindigkeit;
    unsigned int geschwindigkeit;

    std::queue<Aktion> aktAktion; // die aktionen die er machen soll
    std::vector<Aura> auren; // buffs die auf ihn wirken
};


#endif /* LEBEWESEN_H_ */
