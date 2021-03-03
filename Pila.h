#ifndef _pila_
#define _pila_

#include <iostream>
#include "Lista.h"

using namespace std;

template <class T>
class Pila : public Lista<T>
{
public:
    void inQueue (T &pValue){
        this->addToStart(pValue);
    }

    T outQueue(){
        T result = this->getFirst();
        this->removeFirst();
        return result;
    }
};

#endif