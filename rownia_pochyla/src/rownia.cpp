#include<cmath>

#include "rownia.h"

static const double pi = 3.141592;
static const double g = 9.81;

void init(){
    kat = kat * pi/180;
}

void rownia::set_kat(double _kat){
    kat = _kat * pi/180;
}

void rownia::set_dlugosc(double _dlugosc){
    dlugosc = _dlugosc;
}

double rownia::get_dlugosc(){
    return dlugosc;
}

double rownia::get_kat(){
    return kat * 180/pi;
}

double rownia::calculate_a(){
    return g * sin(kat);
}

double rownia::calculate_v(){
    return calculate_a() * calculate_t();
}

double rownia::calculate_t(){
    return sqrt(calculate_a()/(2 * dlugosc));
}

double rownia::calculate_k(double v){
    return ((dlugosc*2*g*sin(kat) - v*v)/(dlugosc*2*g*cos(kat)));
}
