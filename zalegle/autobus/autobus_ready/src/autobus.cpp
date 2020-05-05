#include "autobus.h"
#include "osoba.h"
#include "my_exc.h"

std::ostream& operator<<(std::ostream& ou, autobus z){
  ou << "waga_nom: " << z.waga_nom << std::endl;
  ou << "waga_now: " << z.waga_now << std::endl;
  ou << "miejsca_nom: " << z.miejsca_nom << std::endl;
  ou << "miejsca_now: " << z.miejsca_now << std::endl;
  return ou;
}

std::istream& operator>>(std::istream& in, autobus& z){
    std::cout << "podaj dane autobusu" << std::endl;



  std::cout << "waga_nom: " << z.waga_nom << std::endl;
  in >> z.waga_nom;
  std::cout << "waga_now: " << z.waga_now << std::endl;
  in >> z.waga_now;
  std::cout << "miejsca_nom: " << z.miejsca_nom << std::endl;
  in >> z.miejsca_nom;
  std::cout << "miejsca_now: " << z.miejsca_now << std::endl;
  in >> z.miejsca_now;

  return in;
}


autobus::autobus(double _waga_nom,double _waga_now, int _miejsca_nom , int _miejsca_now):waga_nom(_waga_nom),miejsca_nom(_miejsca_nom){

if(_waga_now < _waga_nom || _miejsca_now < _miejsca_nom){
miejsca_now = _miejsca_now;
waga_now = _waga_now;

}
else{
throw my_exc("wartosci podane sa wieksze od nominalncyh");
}

};

autobus& autobus::operator+(osoba x){
    if(waga_now + x.waga > waga_nom){
        throw my_exc("przekroczono max pojemnosc autobusu");
    }
    else if (miejsca_now + 1 > miejsca_nom){

        throw my_exc("autobus jest pelen nie mozna dodac pasazera");
    }
    else{
        miejsca_now = miejsca_now + 1;
        waga_now = waga_now + x.waga;
    }
    return *this;
}

autobus& autobus::operator-(osoba x){

    if(waga_now - x.waga < 0){
     throw my_exc("waga pasazerwow w autobusie nie moze byc mniejsza od 0");
    }
    else if (miejsca_now - 1 < 0){
    throw my_exc("liczba pasazerow nie moze byc mniejsza od 0");
    }
    else{
        miejsca_now = miejsca_now - 1;
        waga_now = waga_now - x.waga;
    }
    return *this;

}

bool autobus::operator==(autobus x ){
    if (x.waga_now  == waga_now && x.waga_nom  == waga_nom
    && x.miejsca_now == miejsca_now && x.miejsca_nom == miejsca_nom){
        return true;
    }
    else{
        return false;
    }

}
