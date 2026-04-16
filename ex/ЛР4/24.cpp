#include <iostream>

int main(){
    int WifeAge, GroomAge, buf;
    std::cin >> WifeAge >> GroomAge;
    buf = (GroomAge/2)+7
    if (WifeAge == buf) {
        std::cout << "couples approach each other";
    } else {
        std::cout << "couples are unsuitable for each other.";
    }
}