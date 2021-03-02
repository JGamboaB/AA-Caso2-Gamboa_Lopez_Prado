#ifndef _MEDIA_
#define _MEDIA_

#include<iostream>

using namespace std;

template <typename T>
class Media{
private:
    bool status;        //valor encendido/apagado
    bool const audio;   //constante si usa audio
    bool const video;   //constante si usa video
    int id;             //id del tipo de media
    T currentPlaying;   //estacion, canal o cancion reproducida

public:
    virtual void changeChanel(T pChanel) = 0;

    void update() {
        switch (observable.getAccion()){  //hay que cambiar observable por el obs del interface
            case 0:                 //apagar
                this->setStatus(false);
                break;
            case 1:                 //prender
                this->setStatus(this->id == /*father.getIdMedia()*/);
                break;
            case 2:                 //prender + setChannel
                this->setStatus(this->id == /*father.getIdMedia()*/);
                if(this->status)
                    setChanel();
                break;
            case 3:                 //setChannel
                if(this->status)
                    setChanel();
                break;
                //No hay default ya que son valores controlados y no del usuario
        }
    }

    void setStatus(bool pStatus){
        this->status = pStatus;
    }

    T currentlyPlaying(){
        return currentPlaying;
    }

    int getID(){
        return id;
    }
};


/* Example
class TV: public Media<int>{
    public:
        TV(){
            status = audio = video = true;
            id = 0;
            currentPlaying = 2;
        }


};
*/

#endif //_MEDIA_
