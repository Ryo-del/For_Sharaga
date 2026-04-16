#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int height;
    std::cin >> height;
    std::cout << "Идеальный вес: " << height - 100;
}