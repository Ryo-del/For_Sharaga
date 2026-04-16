
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	std::cin >> a >> b >> c;
	int sum = a + b + c;
	double cop = (a + b + c) - sum;
	std::cout << "Сумма к оплате: " << sum <<"руб "<< cop <<" коп";
}
