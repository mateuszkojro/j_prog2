#include <iostream>
#include <cmath>

class zesp {

private:
  double re;
  double im;
public:

friend std::istream& operator>>(std::istream& in,zesp& z);
friend std::ostream& operator<<(std::ostream& ou, zesp z);

  zesp():re(0),im(0){}
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
