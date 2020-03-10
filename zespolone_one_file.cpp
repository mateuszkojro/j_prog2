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

class zesp {

private:
  double re;
  double im;
public:

//zaprzyjaznianie funkcji do wyswietlania i pobierania

friend std::istream& operator>>(std::istream& in,zesp& z);
friend std::ostream& operator<<(std::ostream& ou, zesp z);

  zesp():re(0),im(0){} //ustawianie wartosci poczatkowych dla pol klasy
  zesp(double re,double im);
  ~zesp(){}

  zesp operator+(zesp);
  zesp operator-(zesp);
  zesp operator*(zesp);
  zesp operator/(zesp);

  zesp add(zesp);
  double abs();

  void set_re(double re){this->re = re ;}
  void set_im(double im){this->im = im ;}
  double get_re(){return this->re;}
  double get_im(){return this->im;}


  void show();
};

int main(){
  zesp a, b, c;


  std::cout << "podaj wspolczynnik a i b pierwszej liczby zespolonej w postaci z = a+bi"<<std::endl;
  std::cin >> a;
  std::cout << "podaj wspolczynnik a i b drugiej liczby zespolonej w postaci z = a+bi"<<std::endl;
  std::cin >> b;

  c = a / b;



  std::cout << c << '\n';

  return 0;
}

//obsluga pobierania i wyswietlania liczby zespolonej za pomoca strumieni

std::ostream& operator<<(std::ostream& ou, zesp z){
  ou << "(" <<z.re << ',' << z.im << ')';
  return ou;
}

std::istream& operator>>(std::istream& in, zesp& z){

  in >> z.re;
  in >> z.im;

  return in;
}

//konstruktor z parametrem

zesp::zesp(double re ,double im){

  this->re  = re;
  this->im = im;

  }

//dzialania na liczbach zespolonych (przeciazanie operatorow)

zesp zesp::operator+(zesp a){
  zesp c;

  c.re = this->re + a.re;
  c.im = this->im + a.im;

  return c;

}

zesp zesp::operator-(zesp a){
  zesp c;

  c.re = this->re - a.re;
  c.im = this->im  - a.im;

  return c;
}

zesp zesp::operator*(zesp a){
  zesp c;
  c.re = (this->re * a.re) - (this->im*a.im);
  c.im = (this->re * a.im) + (this->im*a.re);
  return c;
}

zesp zesp::operator/(zesp a){
  zesp c;
  if ((a.re * a.re + a.im * a.im) == 0){
    std::cout << "dzielenie przez zero!";
    throw std::logic_error( "zarowno czesc rzeczywista i urojona drugiej liczby rowne sa 0 dzielenie nie mozliwe" );

  }
  c.re = ((this->re * a.re) + (this->im * a.im))/(a.re * a.re + a.im * a.im);
  c.im = ((this->im * a.re) - (this->re * a.im))/(a.re * a.re + a.im * a.im);



  return c;
}

zesp zesp::add(zesp a){
  zesp c;

  c.re = this->re + a.re;
  c.im = this->im  + a.im;

  return c;
}


double zesp::abs(){

  return sqrt(this->re*this->re + this->im * this->im);

}

//wyswietlanie wersja bez uzywania cout

void zesp::show(){
  printf("re: %f im: %f\n",re,im );
}
