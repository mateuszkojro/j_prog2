#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "include\rownia.h"

int main()
{
    rownia malysz(10,2);

    printf("wspolczynnik k: %lf \n",malysz.calculate_k(10));
    printf("predkosc na koncu to: %lf",malysz.calculate_v());
    printf("czas zjazdu to: %lf",malysz.calculate_t());

   rownia skocznia;
   skocznia.set_kat(90);
   skocznia.set_dlugosc(100);

    return 0;
}
