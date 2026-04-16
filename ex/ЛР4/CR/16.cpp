#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cin >> num;
    int d1 = num / 100, d2 = (num / 10) % 10, d3 = num % 10;
    cout << (d1 == d2 || d1 == d3 || d2 == d3 ? "Да" : "Нет");
}