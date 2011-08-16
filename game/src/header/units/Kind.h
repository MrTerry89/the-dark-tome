/*
 * Kind.h
 *
 *  Created on: 16.08.2011
 *      Author: bognari
 */

#ifndef KIND_H_
#define KIND_H_

#include "units/Dorfbewohner.h"

class Kind : public Lebewesen {
  private :
    unsigned int end_time;
    bool begabung;
    bool schule;
    bool magierschule;
};

#endif /* KIND_H_ */
