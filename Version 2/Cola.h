#ifndef _cola_
#define _cola_

#include <iostream>
#include "Lista.h"

using namespace std;

template <class T>
class Cola : public Lista<T> {
public:
    void inQueue (T &pValue){
        this->addToEnd(pValue);
    }

    T outQueue(){
        T result = this->getFirst();
        this->removeFirst();
        return result;
    }
};

#endif