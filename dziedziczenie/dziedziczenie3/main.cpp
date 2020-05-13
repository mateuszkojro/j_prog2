#include <iostream>
#include <stdexcept>

template<class Type> class table{
	int size_t;
	Type* tab;
	public:
	table(){size_t = 0;};
	table(int _size){
		if (_size < 0)throw std::invalid_argument("rozmiar tablicy nie moze byc mniejszy od 0");
		size_t = _size;
		tab = new Type[size_t];
	}
	~table(){delete [] tab;}
	table(table& other){
		tab = new Type[other.size()];
		size_t = other.size();
		for (int i = 0 ; i < other.size();i++){
			tab[i] = other[i];
		}
	}
	Type& operator[](int i){
		if (i < 0 || i >= size_t)throw std::invalid_argument("adres tablicy poza zakresem");
		return tab[i];
	}
	int size(){return this->size_t;}
	void append(Type a){
		size_t  = size_t +1;
		Type* temp = new Type[size_t];
		for (int i = 0 ; i < size_t - 1;i++){
			temp[i] = tab[i];
		}
		delete [] tab;
		temp[size_t - 1] = a;
		tab = temp;
	}

};

int main(){

	table<int> a(1);
	a[0] = (int) 9;
	std::cout << a[0] << std::endl;
	a.append(10);
	std::cout << a[1] << std::endl;

	table<int> b = a;
	b.append(11);

	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;
	table<int> tab(10);

return 0;
}
