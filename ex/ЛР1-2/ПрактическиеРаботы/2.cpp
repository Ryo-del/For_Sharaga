#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    double volume;
    double square;
    double a, b,c;
    std::cin >> a >> b >> c;
    volume = a * b * c;
    square = 2*(a*c + b*c);
    std::cout << "Объем = " << volume << std::endl << "Площадь = " << square << std::endl;
}