//
// Created by eduar on 3/1/2021.
//

#ifndef _OBSERVABLE_
#define _OBSERVABLE_

#include <iostream>
#include <vector>
#include "Observador.h"

using namespace std;
class Observable {
  private:
    vector<Observador*> observadores;


  public:

    void notify(int pAccion){
        for(int pos = 0; pos < observadores.size(); pos++){
            observadores.at(pos)->update(pAccion);
        }
    }

    virtual void addObserver(Observador& obs) = 0;
    virtual void removeObserver(Observador& obs) = 0;
//  ------- ejemplo del input ----- casi que lo pueden copiar y pegar
/*
    void input(){
        displayMenu();
        int pAccion = getInt()
        sitch(pAccion){
            la idea es hacer los casos del update y un default con una opcion invalida (input falso)
            Se puede hacer con char para incluir todos los inputs (o casi todos)
            hay que hacer un menu con otro switch
            dependiendo de la accion llamen a notify() habiendo cambiado los datos que se necesitan (el channel y el idMedia)
            los cambios haganlo con getInt() y template getChannel() para setear los valores;
                                    primero el media ya que dependiendo de eso hay que verificar el tipo de dato del canal.


        }
    }

*/

};

#endif //_OBSERVABLE_
