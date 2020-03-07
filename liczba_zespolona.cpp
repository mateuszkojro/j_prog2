#include "zesp.h"

int main(){
  zesp a, b, c;

  std::cin >> a;
  std::cin >> b;

  c = a + b;

  std::cout << c << '\n';

  return 0;
}

std::ostream& operator<<(std::ostream& ou, zesp z){
  ou << "(" <<z.re << ',' << z.im << ')';
  return ou;
}

std::istream& operator>>(std::istream& in, zesp& z){

  in >> z.re;
  in >> z.im;

  return in;
}
