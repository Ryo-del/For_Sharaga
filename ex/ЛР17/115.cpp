#include <iostream>

#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    for (char &c : input) {
        if (!isdigit(c) && c != '-' && c != '+') {
            c = ' ';
        }
    }

    std::stringstream ss(input);
    long long sum = 0;
    int num;

    while (ss >> num) {
        sum += num;
    }

    std::cout << "Сумма чисел: " << sum << std::endl;
    return 0;

}