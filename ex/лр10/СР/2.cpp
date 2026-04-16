#include <iostream>

int main() {
    int p;
    int time;
    int a;
    int i =0;
    std::cout << "enter %";
    std::cin >> p;

    std::cout << "enter time";
    std::cin >> time;

    std::cout << "enter cenu";
    std::cin >> a;
    while i < time {
        a -= (a/100*p)
        i++
    }
    std::cout << a; 
}