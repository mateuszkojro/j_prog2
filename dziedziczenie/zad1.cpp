#include <iostream>
#include <stdexcept>
#include <stdio.h>

class a{
	public:
	double x;
	a(){};
	a(double _x):x(_x){};
	double operator+(a y){return x + y.x;}
	double operator-(a y){return x - y.x;}
};

class b : public a{
	public:
	b(double _x){x = _x;};
	double operator*(b y){return x * y.x;}
	double operator/(b y){if(y.x != 0)return x / y.x;
		else throw std::invalid_argument("dzielenie przez 0");}
};

int main(){
b x(3.0),y(2.0);

printf("dodawanie: %lf \n odejmowanie: %lf \n mnozenie: %lf \n dzielenie: %lf",x+y,x-y,x*y,x/y);


return 0;
}
