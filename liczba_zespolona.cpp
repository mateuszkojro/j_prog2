#include<iostream>

//zadanie domowe dolozyc odejmowanie mnozenie dzielenie wartosc bezwzgledna

class zesp {

private:
  double re;
  double im;
public:
  zesp();
  zesp(double re,double im);
  ~zesp(){}

  zesp add(zesp);
  void set_re(double){this->re = re ;}
  void set_im(double){this->im = im ;}
  double get_re(){return this->re;}
  double get_im(){return this->im;}


  void show();
};


int main(){
  zesp a(2,1), b(3,2), c;

  c = a.add(b);

  c.show();

  return 0;
}

zesp::zesp():re(0),im(0){}

zesp::zesp(double re ,double im){

  this->re  = re;
  this->im = im;

  }

zesp zesp::add(zesp b){
  zesp c;

  c.re = this->re + b.re;
  c.im = this->im  + b.im;

  return c;
}

void zesp::show(){
  printf("%f+i%f",re,im );
}
