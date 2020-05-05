#pragma once

#include <iostream>

#include "osoba.h"
#include "my_exc.h"

class osoba;
class autobus{

friend std::ostream& operator<<(std::ostream& ou, autobus z);
friend std::istream& operator>>(std::istream& in, autobus& z);


private:
    double waga_nom;
    double waga_now;
    int miejsca_nom;
    int miejsca_now;

public:

    autobus():waga_nom(0.0),waga_now(0.0),miejsca_nom(0.0),miejsca_now(0.0){};
    autobus(double _waga_nom,double _waga_now, int _miejsca_nom , int _miejsca_now);
    autobus(const autobus& other):waga_nom(other.waga_nom),waga_now(other.waga_now),miejsca_nom(other.miejsca_nom),miejsca_now(other.miejsca_now){};

    autobus& operator+(osoba x);
    autobus& operator-(osoba x);

    bool operator==(autobus);

    ~autobus(){};

};

