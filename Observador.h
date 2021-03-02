//
// Created by eduar on 3/1/2021.
//

#ifndef _OBSERVADOR_
#define _OBSERVADOR_

#include "Observable.h"

class Observador {
protected:
    Observable* obser;

public:

    virtual void update() = 0;

};



#endif //_OBSERVADOR_
