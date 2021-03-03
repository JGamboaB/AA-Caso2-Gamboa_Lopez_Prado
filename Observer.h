#ifndef _OBSERVER_
#define _OBSERVER_

#include <iostream>
using namespace std;

class Subject; //Subject definition

class Observer{
    protected:
        Subject* subj;
    
    public:
        virtual void update(int id) = 0;

        /*
        void setSubj(Subject* subject){
            subj = subject;
            subject->addObserver(this);
        }*/

        void setSubj(Subject* subject);
};

class Media{
    private:
        int id;
        bool state = false;
    
    public:
        void setId(int id){
            this->id = id;
        }

        int getId(){
            return id;
        }

        void setState(bool state){
            this->state = state;
        }

        bool getState(){
            return state;
        }

};

class TV: public Media, public Observer{
    public:
        TV(Subject *subj){
            setId(0);
            setSubj(subj);
        }

        void update(int id){
            (getId() == id)? setState(true): setState(false);
            cout << "El Televisor esta " << ((getState())? "Encendido" : "Apagado") << endl;
        }
};

class Radio: public Media, public Observer{
    public:
        Radio(Subject *subj){
            setId(1);
            setSubj(subj);
        }

        void update(int id){
            (getId() == id)? setState(true): setState(false);
            cout << "El Radio esta " << ((getState())? "Encendido" : "Apagado") << endl;
        }
};

class YT: public Media, public Observer{
    public:
        YT(Subject *subj){
            setId(2);
            setSubj(subj);
        }

        void update(int id){
            (getId() == id)? setState(true): setState(false);
            cout << "Youtube Music esta " << ((getState())? "Encendido" : "Apagado") << endl;
        }
};

class Spotify: public Media, public Observer{
    public:
        Spotify(Subject *subj){
            setId(3);
            setSubj(subj);
        }

        void update(int id){
            (getId() == id)? setState(true): setState(false);
            cout << "Spotify esta " << ((getState())? "Encendido" : "Apagado") << endl;
        }
};

#endif //_OBSERVER_