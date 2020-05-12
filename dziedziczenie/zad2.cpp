#include <iostream>

class figure{
	virtual double pole() = 0;
};

class prostokat : public figure{
	double a,b;
	public:
	prostokat(){};
	prostokat(double _a ,double  _b):a(_a),b(_b){};
	
	double pole(){
		return a * b;
	}

};

class kwadrat : public prostokat{
	double a;
	public:
	kwadrat(){};
	kwadrat(double _a):a(_a){};

	double pole(){
		return a * a;
	}


};

int main(){

int size = 2;

prostokat** tab = new prostokat*[size];

tab[0] = new prostokat(3,4);
tab[1] = new kwadrat(6);

for (int i = 0  ; i < size;i++){

	std::cout << tab[i]->pole() << std::endl;

}

return 0;
}
