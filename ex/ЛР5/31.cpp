#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian"); 
    int day, month;
    std::cout << "Введите день и месяц\n";
    std::cin >> day >> month;

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        std::cout << "Такой даты не существует!";
        return 0;
    }

    int date = month * 100 + day;

    if ((date >= 120 && date <= 218)) std::cout << "Водолей";
    else if ((date >= 219 && date <= 320)) std::cout << "Рыбы";
    else if ((date >= 321 && date <= 419)) std::cout << "Овен";
    else if ((date >= 420 && date <= 520)) std::cout << "Телец";
    else if ((date >= 521 && date <= 620)) std::cout << "Близнецы";
    else if ((date >= 621 && date <= 722)) std::cout << "Рак";
    else if ((date >= 723 && date <= 822)) std::cout << "Лев";
    else if ((date >= 823 && date <= 922)) std::cout << "Дева";
    else if ((date >= 923 && date <= 1022)) std::cout << "Весы";
    else if ((date >= 1023 && date <= 1121)) std::cout << "Скорпион";
    else if ((date >= 1122 && date <= 1221)) std::cout << "Стрелец";
    else if ((date >= 1222 && date <= 1231) || (date >= 101 && date <= 119)) std::cout << "Козерог";
    else std::cout << "Такой даты не существует!";

    return 0;
}