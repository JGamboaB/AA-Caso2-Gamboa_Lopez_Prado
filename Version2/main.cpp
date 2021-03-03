#include "Subject.h"
#include "Persona.h"
#include "Pila.h"
#include "Cola.h"

struct person{
    int id;
    string name;
}per1,per2,per3;

int menu(){
    int opt;
    cout << "\nCual de las siguientes opciones le gustaria utilizar: \n(1) TV\n(2) Radio\n(3) Youtube Music\n(4) Spotify\n(5) Salir\n\n";
    cin >> opt;

    if (cin.fail() || opt < 1 || opt > 5){
        cout << "\nIngrese un valor valido por favor.\n";
        cin.clear();
        cin.ignore(80,'\n');
        menu();
    }

    cout << endl;
    return --opt;
}

void ejercicio1() {
    Persona p1 (01,"Daniel");
    Persona p2 (02,"Alonso");
    Persona p3 (03,"Ana");

    per1.id = 1;
    per1.name = "Daniel";
    per2.id = 2;
    per2.name = "Edgar";
    per3.id = 3;
    per3.name = "Ana";
    person perAux;

    Cola <Persona>colClase = Cola<Persona>();
    Pila <Persona>pilClase = Pila<Persona>();

    Cola <person>colStruct = Cola<person>();
    Pila <person>pilStruct = Pila<person>();

    //inQueue de los parametros

    colStruct.inQueue(per1);
    colStruct.inQueue(per2);
    colStruct.inQueue(per3);

    colClase.inQueue(p1);
    colClase.inQueue(p2);
    colClase.inQueue(p3);

    pilClase.inQueue(p1);
    pilClase.inQueue(p2);
    pilClase.inQueue(p3);

    pilStruct.inQueue(per1);
    pilStruct.inQueue(per2);
    pilStruct.inQueue(per3);

    //outQueue con print

    std::cout<<"Print Cola con Struct"<<endl;
    perAux = colStruct.outQueue();          //pop y print info
    std::cout<<"Id: " << perAux.id <<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;

    perAux = colStruct.outQueue();          //get y print info
    std::cout<<"Id: " << perAux.id<<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;

    perAux = colStruct.outQueue();          //get y print info
    std::cout<<"Id: " << perAux.id<<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;


    std::cout<<"Print Pila con Struct"<<endl;
    perAux = pilStruct.outQueue();   //pop y print info
    std::cout<<"Id: " << perAux.id<<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;

    perAux = pilStruct.outQueue();   //get y print info
    std::cout<<"Id: " << perAux.id<<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;

    perAux = pilStruct.outQueue();   //get y print info
    std::cout<<"Id: " << perAux.id<<endl;
    std::cout<<"Name: " << perAux.name<<endl<<endl;


    std::cout<<"Print Cola con Clase"<<endl;
    colClase.outQueue().printInfo();
    colClase.outQueue().printInfo();
    colClase.outQueue().printInfo();


    std::cout<<"Print Pila con Clase"<<endl;
    pilClase.outQueue().printInfo();
    pilClase.outQueue().printInfo();
    pilClase.outQueue().printInfo();
}

int main(){

    ejercicio1();

    Subject* subj = new Subject();

    TV* tv = new TV(subj);
    Radio* radio = new Radio(subj);
    YT* yt = new YT(subj);
    Spotify* spotify = new Spotify(subj);

    int opt;

    do{
        opt = menu();
        subj->setId(opt);
    } while (opt != 4);
    
    cout << "\nEl programa se cerro. Muchas gracias :)\n" << endl;

    return 0;
}