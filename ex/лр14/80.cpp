#include <iostream>
#include <cmath>

double F(double x) {
    if ( x <= 0 ) {
        return cos(x);
    } else {
        return log(x+1);
    }
}

int main() {
    double a, b;

    std::cout << "Введите значение a и b ";
    std::cin >> a >> b;

    double S = F(b) - F(a);

    std::cout << S;
    return 0;
}