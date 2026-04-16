#include <iostream>

int main() {
    setlocale(LC_ALL,"Russian");
    char a;
    char array[6] = {'e','y','u','i','o','a'};
    std::cin >> a;
    bool toggle = false;
    for (int i = 0; i < 8; i++) {
        if (a == array[i]) {
            toggle = true;
        }
    }
    if (toggle != true) {
    std::cout << "Согласная";
    } else {
    std::cout << "Гласная";
    }
}