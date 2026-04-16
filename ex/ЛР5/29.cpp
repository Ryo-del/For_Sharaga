#include <iostream>

int main() {
    double a,b;
    char op;
    std::cout << "Enter a, b, operator" << std::endl;
    std::cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        std::cout << a+b;
        break;
    case '-':
        std::cout << a-b;
    case '*':
        std::cout << a*b;
    case '/':
        std::cout << a/b;
    default:
        std::cout << "operator not found";
        break;
    }
}