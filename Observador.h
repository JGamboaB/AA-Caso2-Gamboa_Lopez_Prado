//
// Created by eduar on 3/1/2021.
//

#ifndef _OBSERVADOR_
#define _OBSERVADOR_

#include "Observable.h"

class Observador {
private:
    Observable* obser;

public:

    virtual void update(int pAccion) = 0;

};



#endif //_OBSERVADOR_
