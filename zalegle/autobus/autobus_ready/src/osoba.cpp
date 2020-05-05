#include "osoba.h"

void osoba::set_waga(double _waga){
    if (_waga > 0){
        waga = _waga;
    }
    else{
        my_exc("waga pasazera nie moze byc mniejsza od 0");
    }
}

double osoba::get_waga(){
    return waga;
}
