#include <iostream>

using namespace std;

double intpower(double x, int n) {
    if (n == 0) return 1;
    return x * intpower(x, n - 1);
}


int main() {
    double x, y;
    int n, m;

    cout << "Введите x и n для x^n: ";
    cin >> x >> n;
    cout << "Введите y и m для y^m: ";  
    cin >> y >> m;

    double z = intpower(x, n) + intpower(y, m);
    cout << z;
}