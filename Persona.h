#ifndef _persona_
#define _persona_

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
    int id;
    string name;

public:
    Persona(){
        this->id = 0;
        this->name = "";
    }
    Persona(int pId, string pName){
        this->id = pId;
        this->name = pName;
    }

    void printInfo(){
        std::cout<<"Id: " << this->id << endl;
        std::cout<<"Nombre: " << this->name << endl << endl;
    }
};

#endif