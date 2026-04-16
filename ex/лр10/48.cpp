#include <iostream>

int main() {
    int n;
    int sum;
    std::cin >> n;
    n = n*2;
    for (int i; i < n*2; i++) {
        if i % 2 == 0 {
            sum += i;
        }
    }
    
    if n*2 == sum {
        std::cout << "verno";
    } else {
        std::cout << "ne verno";
    }
}