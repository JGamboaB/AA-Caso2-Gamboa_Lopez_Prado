#include "Subject.h"

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

int main(){
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