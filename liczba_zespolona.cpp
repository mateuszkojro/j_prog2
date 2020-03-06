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

  zesp operator+(zesp);
  zesp operator-(zesp);
  zesp add(zesp);
  void set_re(double){this->re = re ;}
  void set_im(double){this->im = im ;}
  double get_re(){return this->re;}
  double get_im(){return this->im;}


  void show();
};

std::ostream& operator<<(std::ostream& ou,zesp z){
  ou << z.get_re() << '_';
  ou << z.get_im();
  return ou;
}


int main(){
  zesp a(2,1), b(3,2), c;

  c = a+b;

  std::cout << c << '\n';

  return 0;
}


zesp zesp::operator+(zesp a){
  zesp c;

  c.re = this->re + a.re;
  c.im = this->im  + a.im;

  return c;

}

zesp zesp::operator-(zesp a){
  zesp c;

  c.re = this->re - a.re;
  c.im = this->im  - a.im;

  return c;
}

zesp::zesp():re(0),im(0){}

zesp::zesp(double re ,double im){

  this->re  = re;
  this->im = im;

  }

zesp zesp::add(zesp a){
  zesp c;

  c.re = this->re + a.re;
  c.im = this->im  + a.im;

  return c;
}

void zesp::show(){
  printf("re: %f im: %f\n",re,im );
}
