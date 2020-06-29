#include <iostream>

#include <immintrin.h>

int main(){
    __m256d a ,b ,wynik, two;
    two = _mm256_set1_pd(2.0);
    wynik = _mm256_mul_pd(a,b); //pd - pararell double  - a * b
    wynik = _mm256_add_pd(wynik, b);
    wynik = _mm256_fmadd_pd(b,wynik,two);
    return 0;
}