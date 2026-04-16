#include <iostream>
#include <string>

std::string units(int n) {
    switch (n) {
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


std::string tens(int n) { 
    switch (n) {
        case 2: return "двадцать";
        case 3: return "тридцать";
        case 4: return "сорок";
        case 5: return "пятьдесят";
        case 6: return "шестьдесят";
        case 7: return "семьдесят";
        case 8: return "восемьдесят";
        case 9: return "девяносто";
        default: return "";
    }
}


std::string hundreds(int n) { 
    switch (n) {
        case 1: return "сто";
        case 2: return "двести";
        case 3: return "триста";
        case 4: return "четыреста";
        case 5: return "пятьсот";
        case 6: return "шестьсот";
        case 7: return "семьсот";
        case 8: return "восемьсот";
        case 9: return "девятьсот";
        default: return "";
    }
}


std::string twoDigits(int n) {
    if (n == 0) return "";
    if (n < 20) return units(n);
    
    int t = n / 10;      // десятки
    int u = n % 10;      // единицы
    std::string res = tens(t);
    if (u != 0) {
        res += " " + units(u);
    }
    return res;
}


std::string numberToWords(int n) {
    if (n < 100 || n > 999) return "";

    int h = n / 100;        
    int rest = n % 100;      

    std::string result = hundreds(h);
    std::string tail = twoDigits(rest);
    
    if (!tail.empty()) {
        result += " " + tail;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int num;
    std::cout << "Введите целое число от 100 до 999: ";
    std::cin >> num;

    if (num < 100 || num > 999) {
        std::cout << "Ошибка: число должно быть в диапазоне от 100 до 999." << std::endl;
        return 1;
    }

    std::string words = numberToWords(num);

    std::cout << num << " – «" << words << "»" << std::endl;

    return 0;
}