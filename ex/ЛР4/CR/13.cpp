#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cin >> num;
    int sum = num / 100 + (num / 10) % 10 + num % 10;
    cout << (sum == 9 ? "Да" : "Нет");
}