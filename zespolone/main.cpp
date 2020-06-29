#if 0
06.03.2020 j_prog2

*wstep do klas
*przeciazanie operatorow
*zaprzyjaznianie klas

zadanie domowe:
mnozenie, dzielenie i wartosc bezwzgledna liczby zespolonej

#endif


#include <iostream>
#include <cmath>
#include <stdexcept>

#include "zesp.h"



int main(){
  zesp a, b, c;


  std::cout << "podaj wspolczynnik a i b pierwszej liczby zespolonej w postaci z = a+bi"<<std::endl;
  std::cin >> a;
  std::cout << "podaj wspolczynnik a i b drugiej liczby zespolonej w postaci z = a+bi"<<std::endl;
  std::cin >> b;

  std::cout << "a \ b :\n";

  c = a / b;



  std::cout << c << '\n';

  return 0;
}
