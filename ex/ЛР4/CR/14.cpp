#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cin >> num;
    int d1 = num / 100, d2 = (num / 10) % 10, d3 = num % 10;
    int cubeSum = d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3;
    cout << (num * num == cubeSum ? "Да" : "Нет");
}