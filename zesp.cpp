#include "zesp.h"

zesp::zesp(double re ,double im){

  this->re  = re;
  this->im = im;

  }

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

void zesp::show(){
  printf("re: %f im: %f\n",re,im );
}
