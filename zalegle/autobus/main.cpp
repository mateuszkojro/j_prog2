#include  <iostream>

#include "autobus.h"
#include "osoba.h"

int main(){
    osoba a;
    
    autobus x;
    
    autobus y = x - a;
    autobus z = y + a;
    
     
    bool v = x == z;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << v << std::endl;

    return 0;
}