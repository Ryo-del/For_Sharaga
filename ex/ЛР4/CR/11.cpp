#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) {
        cout << "Точки лежат на одной прямой";
    } else {
        cout << "Точки не лежат на одной прямой";
    }
}