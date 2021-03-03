#ifndef _SUBJECT_
#define _SUBJECT_

#include "Observer.h"
#include <vector>

class Subject{
    private:
        vector<Observer*> observers;
        int id;

    public:
        Subject(){
            setId(-1);
        }

        void addObserver(Observer* obs){
            observers.push_back(obs);
        }

        void notifyObservers(){
            for (Observer* obs: observers)
                obs->update(getId());
        }

        int getId(){
            return id;
        }

        void setId(int id){
            this->id = id;
            notifyObservers();
        }
};

void Observer::setSubj(Subject* subject){
    subj = subject;
    subject->addObserver(this);
}

#endif //_SUBJECT_