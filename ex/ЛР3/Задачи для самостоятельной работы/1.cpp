#include <iostream>

int main() {
    int ny = 365;
    int days;
    int num;
    std::cin >> days;
    int before = ny - days;
    std::cout << before << " Days before the New Year" << std::endl;
    std::cin >> num;
    if (num >= 10 && num <= 99){
        int first = num / 10;
        int sec = num % 10;
        std::cout << first + sec << std::endl;
    } else {
        std::cout << "Число не является двухзначным!\n";
    }
    int num2;
    std::cin >> num2;
    if (num2 >= 100 && num2 <= 999) {
       int digit = num2 % 10;
       int result = digit;
       num2 = num2 / 10;
       while (num2 > 0) {
        digit = num2 % 10;
        num2 = num / 10;
        result = result * 10;
        result = result + digit;
       }
        std::cout << result;
    }

}