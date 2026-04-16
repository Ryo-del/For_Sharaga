
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	std::cin >> a >> b >> c;
	double total = a + b + c;
	int rub = int(total);
	int cop = (total-rub) * 100 + 0.5;
	std::cout << "Сумма к оплате: " << rub <<"руб "<< cop <<" коп";
}
