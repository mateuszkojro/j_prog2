
#include "osoba.h"

void osoba::set_waga(double _waga){
    if (_waga > 0){
        waga = _waga;
    }
    else{
        // throw zla waga 
    }
}

double osoba::get_waga(){
    return waga;
}