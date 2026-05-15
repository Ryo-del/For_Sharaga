#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    
    int count = 0;
    
    for (int num = 1; num <= 999; num++) {
        int n = num;
        while (n > 0) {
            if (n % 10 == 5) count++;
            n /= 10;
        }
    }
    
    std::cout << "Количество цифр '5' от 1 до 999: " << count << std::endl;
    return 0;
}