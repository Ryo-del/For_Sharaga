#include <iostream>
#include <cmath>

int main() {
    double m,d,c,y;
    std::cout << "Введите m  - номер месяца (см. ниже)\nd - число (день месяца)\n с - номер столетия (см. ниже)\n у - номер года в столетии.  \n";
    std::cin >> m >> d >> c >> y;
    double X = abs(trunc(2.6*m-0.2)+d+y/4+y+c/4-2*c);
    std::cout << X;
}