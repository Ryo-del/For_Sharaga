#include <iostream>
#include <string>


std::string nums(int num) {
    switch (num) {
        case 0: return "";
        case 1: return "один";
        case 2: return "два";
        case 3: return "три";
        case 4: return "четыре";
        case 5: return "пять";
        case 6: return "шесть";
        case 7: return "семь";
        case 8: return "восемь";
        case 9: return "девять";
        case 10: return "десять";
        case 11: return "одиннадцать";
        case 12: return "двенадцать";
        case 13: return "тринадцать";
        case 14: return "четырнадцать";
        case 15: return "пятнадцать";
        case 16: return "шестнадцать";
        case 17: return "семнадцать";
        case 18: return "восемнадцать";
        case 19: return "девятнадцать";
        default: return "";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int num;
    std::cout << "Введите число от 1 до 40: ";
    std::cin >> num;

    if (num < 1 || num > 40) {
        std::cout << "Число меньше 1 или больше 40" << std::endl;
        return 0;
    }

    std::string result;

    if (num >= 1 && num <= 19) {
        result = nums(num);
    } 
    else if (num >= 20 && num <= 29) {
        result = "двадцать";
        int units = num - 20;
        if (units > 0) {
            result += " " + nums(units);
        }
    } 
    else if (num >= 30 && num <= 39) {
        result = "тридцать";
        int units = num - 30;
        if (units > 0) {
            result += " " + nums(units);
        }
    } 
    else if (num == 40) {
        result = "сорок";
    }

    std::cout << result << std::endl;

    return 0;
}