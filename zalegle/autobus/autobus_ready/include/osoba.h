
#pragma once

#include "autobus.h"
class autobus;

class osoba{
friend autobus;

private:
    double waga;
public:
   osoba():waga(0.0){};
   osoba(double _waga):waga(_waga){};

    void set_waga(double);
    double get_waga();
    ~osoba(){};

};


