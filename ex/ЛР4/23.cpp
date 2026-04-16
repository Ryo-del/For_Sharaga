#include <iostream>
setlocale (LC_ALL,"ru")
int main() {
    int a, b, max, min;
    std::cout << "Enter two number\n";
    std::cin >> a >> b ;
    if (a > b){
        max = a
        min = b
        std::cout << min << std::endl << max;
    } else if (a < b) {
        max = b
        min = a
        std::cout << min << std::endl << max;
    } else {
        std::cout << "Числа Равны!!";
    }
}
