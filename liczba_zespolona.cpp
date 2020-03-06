#include<iostream>
#include<cmath>

class zesp {

private:
  double re;
  double im;
public:

friend std::istream& operator>>(std::istream& in,zesp& z);
friend std::ostream& operator<<(std::ostream& ou, zesp z);

  zesp();
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

  std::cin >> a;
  std::cin >> b;

  c = a+b;

  std::cout << c << '\n';

  return 0;
}

zesp::zesp():re(0),im(0){}

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




std::ostream& operator<<(std::ostream& ou, zesp z){
  ou << "(" <<z.re << ',' << z.im << ')';
  return ou;
}

std::istream& operator>>(std::istream& in, zesp& z){
double x,y;
  in >> z.re;
  in >> z.im;

  return in;
}
