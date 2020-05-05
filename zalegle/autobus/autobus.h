#pragma once 

#include <iostream>

#include "osoba.h"


class autobus{

friend std::ostream& operator<<(std::ostream& ou, autobus z);
friend std::istream& operator>>(std::istream& in, autobus& z);


private:
    double waga_nom;
    double waga_now;
    int miejsca_nom;

    int miejsca_now;

public:

    autobus();
    autobus(double , int);

    autobus operator+(osoba);
    autobus operator-(osoba);

    bool operator==(autobus);

    ~autobus();

};

