#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    double a, b, c;
    cin >> a >> b >> c;
    double maxSide = max(a, max(b, c));
    double sumSquares = a * a + b * b + c * c - maxSide * maxSide;
    cout << (maxSide * maxSide == sumSquares ? "Прямоугольный" : "Не прямоугольный");
}