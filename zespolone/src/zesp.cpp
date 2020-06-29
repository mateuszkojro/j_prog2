#include "zesp.h"

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
