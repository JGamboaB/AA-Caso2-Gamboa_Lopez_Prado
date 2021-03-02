#ifndef _MEDIA_
#define _MEDIA_

#include<iostream>

using namespace std;

template <typename T>
class Media{
protected:
    bool status;        //valor encendido/apagado
    bool const audio;   //constante si usa audio
    bool const video;   //constante si usa video
    int id;             //id del tipo de media
    T currentPlaying;   //estacion, canal o cancion reproducida

public:
    virtual void setChannel(T pChannel) = 0;

    void setStatus(bool pStatus){
        this->status = pStatus;
    }

    T currentlyPlaying(){
        return currentPlaying;
    }

    int getID(){
        return id;
    }

    void printInfo(){
        std::cout << "El reproductor numero: " << this->getID() <<endl << " esta " << (this->status) ? "encendido." : "apagado.";
        if(this->status)
            std::cout << "Y reproduciendo: " << this->currentPlaying << endl;
    }
};



#endif //_MEDIA_
