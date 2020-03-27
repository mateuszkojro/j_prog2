#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "include\rownia.h"

int main()
{
    rownia malysz(10,2);

    printf("wspolczynnik k: %lf \n",malysz.calculate_k(10));
    printf("v: %lf",malysz.calculate_v());
    return 0;
}
