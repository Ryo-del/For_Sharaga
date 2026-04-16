#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"ru");
    double side, radius;
    cin >> side >> radius;
    if (radius == side / 2) {
        cout << "Круг вписан в квадрат";
    } else {
        cout << "Круг не вписан в квадрат";
    }
}