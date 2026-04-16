#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
	setlocale(LC_ALL, "Russian");
	double size,bank1,bank2;
	int month;
	std::cout << "Здравствуйте. Задайте размер Вашего вклада : ";
	std::cin >> size;
	std::cout << "\nа сколько месяцев Вы делаете вклад: ";
	std::cin >> month;
	std::cout << "\nСколько процентов годовых Вам обещано в банке 1: ";
	std::cin >> bank1;
	std::cout << "\nСколько процентов годовых Вам обещано в банке 2: ";
	std::cin >> bank2;
	std::cout << std::fixed << std::setprecision(0);
	double result1 = size * pow(1 + bank1/100/12, month);
	double result2 = size * pow(1 + bank2/100/12, month);

	std::cout << "\nЧерез 10 месяцев на Вашем счете в банке 1 будет : " << result1;
	std::cout << "\nЧерез 10 месяцев на Вашем счете в банке 2 будет : " << result2;
}
