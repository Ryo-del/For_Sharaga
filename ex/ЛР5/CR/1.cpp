#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    int month;
    std::cout << "Введите номер месяца\n";
    std::cin >> month;
    switch (month){
        case 1:
            
        case 2:
        
        case 3:
            std::cout << "Март";
            break;
        case 4:
            std::cout << "Апрель";
            break;
        case 5:
            std::cout << "Май";
            break;
        case 6:
            std::cout << "Июнь";
            break;
        case 7:
            std::cout << "июль";
            break;
        case 8:
            std::cout << "Август";
            break;
        case 9:
            std::cout << "Сентябрь";
            break;
        case 10:
            std::cout << "Октябрь";
            break;
        case 11:
            std::cout << "Ноябрь";
            break;
        case 12:
            std::cout << "Декабрь";
            break;
        
        
        default:
            std::cout << "Такого месяца не существует!";
            break;
    }

}