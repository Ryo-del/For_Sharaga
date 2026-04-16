#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер года и месяца: ";
    int year, month;
    std::cin >> year >> month;
    int days;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    std::cout << "В " << month << "-м месяце " << year << " года " << days << " дней"<< std::endl;
}