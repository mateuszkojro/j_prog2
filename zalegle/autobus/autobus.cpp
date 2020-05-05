#include "autobus.h"
#include "osoba.h"


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

autobus autobus::operator+(osoba x){
    autobus temp;
    if(waga_now + x.waga > waga_nom){
        //throw przekroczono mase
    }
    else if (miejsca_now + 1 > miejsca_nom){

        //throw za duzo osob
    }
    else{
        temp.miejsca_now = miejsca_now + 1;
        temp.waga_now = waga_now + x.waga;     
    }
    return temp;
}

autobus autobus::operator-(osoba x){
    autobus temp;
    if(waga_now - x.waga < 0){
        //throw przekroczono mase
    }
    else if (miejsca_now - 1 < 0){

        //throw za duzo osob
    }
    else{
        temp.miejsca_now = miejsca_now - 1;
        temp.waga_now = waga_now - x.waga;     
    }
    return temp;

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
