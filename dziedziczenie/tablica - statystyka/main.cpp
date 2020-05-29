#include <iostream>
#include "table.h"
#include "stats.h"

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

	stats<int> x;

	x.append(9);
	x.append(11);
	x.append(10);

	std::cout << "srednia: " << x.avg() << std::endl;


return 0;
}
