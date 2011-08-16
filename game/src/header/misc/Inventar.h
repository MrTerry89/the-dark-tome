/*
 * Inventar.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef INVENTAR_H_
#define INVENTAR_H_

#include "misc/InventarEintrag.h"

class Inventar {
  private :
    InventarEintrag[] inhalt;
    unsigned int max_Gewicht;
    unsigned int akt_Gewicht;
};


#endif /* INVENTAR_H_ */
