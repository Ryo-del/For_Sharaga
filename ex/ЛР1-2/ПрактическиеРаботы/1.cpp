#include <iostream>

int main() {
    int a = 10;
    int b = 5;
    a = a + b; // 15
    b = a - b; // 10
    a = a - b; //5
    std::cout << a << std::endl << b;
}