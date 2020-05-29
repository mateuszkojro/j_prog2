#pragma once

#include <stdexcept>
#include <iostream>
template<class Type> class table{
    protected:
	int size_t;
	Type* tab;
	public:
	table(){tab = new Type[0]; size_t = 0;};
	table(int _size){
		if (_size < 0)throw std::invalid_argument("rozmiar tablicy nie moze byc mniejszy od 0");
		size_t = _size;
		tab = new Type[size_t];
	}
	table(Type* _tab, int _size){
	    size_t = _size;
	    tab = new Type[_size];
        for (int i = 0 ; i < _size;i++){
            tab[i] = _tab[i];
        }
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
