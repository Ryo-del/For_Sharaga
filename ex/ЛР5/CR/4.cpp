#include <iostream>
int main() {
    setlocale(LC_ALL, "Russian");
    int star;
    std::cout << "Введите оценку" << std::endl;
    std::cin >> star;
    switch (star) {
        case 1:
            std::cout << "Плохо" << std::endl;
            break;
        case 2:
            std::cout << "Неудовлетворительно" << std::endl;
            break;
        case 3:
            std::cout << "Удовлетворительно" << std::endl;
            break;
        case 4:
            std::cout << "Хорошо" << std::endl;
            break;
        case 5:
            std::cout << "Отлично" << std::endl;
            break;
        
        default:
            std::cout << "Нельзя вводить такую оценку!";
    }

}