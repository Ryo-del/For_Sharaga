#include <iostream>
#include <sstream>
#include <string>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");

    std::string input;
    std::cout << "Введите числа с пробелами ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    long long sum = 0;
    int number;
    
    while (ss >> number) {
        sum += number;
    }

    std::cout << "Сумма всех введеных чисел: " << sum;
}