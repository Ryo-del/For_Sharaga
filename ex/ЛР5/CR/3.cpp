#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    std::cin >> num;
    switch (num) {
    case 2: 
        std::cout << "Двойка" << std::endl;
        break;
    case 3: 
        std::cout << "Тройка" << std::endl;
        break;
    case 4: 
        std::cout << "Четверка" << std::endl;
        break;
    case 5: 
        std::cout << "Пятёрка" << std::endl;
        break;
    case 6: 
        std::cout << "Шестёрка" << std::endl;
        break;
    case 7: 
        std::cout << "Семёрка" << std::endl;
        break;
    case 8: 
        std::cout << "Восьмёрка" << std::endl;
        break;
    case 9: 
        std::cout << "Девятка" << std::endl;
        break;
    case 10:
        std::cout << "Десятка" << std::endl;
        break;
    case 11:
        std::cout << "Валет" << std::endl;
        break;
    case 12:
        std::cout << "Дама" << std::endl;
        break;
    case 13:
        std::cout << "Король" << std::endl;
        break;
    case 14:
        std::cout << "Туз" << std::endl;
        break;
    default:
        std::cout << "Такой карты не существует!" << std::endl;
    break;
    }
}