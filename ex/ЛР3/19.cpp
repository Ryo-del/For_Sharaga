
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	double a,b;
	std::cin >> a >> b;
	
	std::cout << "разность квадратов: " << (a - b) * (a + b) << std::endl; 
	std::cout << "квадрат разностит: " << a * a - 2 * a * b + b * b;
}
