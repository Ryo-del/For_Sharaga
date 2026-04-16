#include <iostream>

int main() {
    int years;
    double money = 15000;
    std::cout << "enter years, pls enter more 10!\n";
    std::cin >> years;
    if (years <= 10) {
        std::cout << "cannot be taken for less than 10 years!";
        return 0;
    }
    for (int i = 0; i <= years; i++) {
        money = money * 1.15;
    }
    std::cout << "sum = " << money;
}