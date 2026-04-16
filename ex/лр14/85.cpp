#include <iostream> 

using namespace std;

int nod(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= b;
    }
    return a;
}

int main() {
    int x, y, z;
    cout << "Введите 3 числа: ";
    cin >> x >> y >> z;

    int res = nod(x, y);
    res = nod(res, z);

    cout << res;

    return 0;
}