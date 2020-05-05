#include  <iostream>

#include "autobus.h"
#include "osoba.h"
#include "my_exc.h"

int main(){

    osoba a(200);
    osoba b(100);
    autobus x(2000,200,10,2),y,z;

    y = x + a;
    z = x - a;

    bool v = x == z;

    printf("x:\n");
    std::cout << x << std::endl;
    printf("y:\n");
    std::cout << y << std::endl;
    printf("z:\n");
    std::cout << z << std::endl;

    printf("v:\n");
    std::cout << v << std::endl;

    try{

        autobus fail(0 ,100 ,100 ,100);


    } catch(std::exception& e ){

    std::cout << "\nWYSTAPIL BLAD PRACY PRGROMAU: \n " << e.what() << std::endl;

    }



    return 0;
}
