//
// Created by eduar on 3/2/2021.
//

#ifndef _CLASES_
#define _CLASES_

#include <string>
#include <iostream>
#include "Media.h"
#include "Observador.h"

template <typename T>
class Tele: public Media<int>, public Observador{   //cambiar el int ddependiendo del canal
  private:

  public:
    Tele(){
        this->status = false;
        this->id = 0;
        this->audio = true;
        this->video = true;
        this->obser = nullptr;
    }

    void update() {
        switch (obser.getAccion()){  //hay que implementar el getAccion en el user
            case 0:                 //apagar
                if(this->status)
                    this->setStatus(false);
                break;
            case 1:                 //prender
                this->setStatus(this->id == /*father.getIdMedia()*/);
                break;
            case 2:                 //prender + setChannel
                this->setStatus(this->id == /*father.getIdMedia()*/);
                if(this->status)
                    setChanel(obser.getChannel());      //falta crear el Observable.getChannel() que se hace en el user
                break;
            case 3:                 //setChannel
                if(this->status)
                    setChanel(obser.getChannel());
                break;
                //No hay default ya que son valores controlados y no del usuario
        }
        this->printInfo();
    }

    void setChannel(T pChannel){
        this->currentPlaying = pChannel;
    }
};

#endif //_CLASES_
