#pragma once

#include "autobus.h"

class osoba{
friend autobus;

private:
    double waga;
public:
    void set_waga(double);
    double get_waga();

};

