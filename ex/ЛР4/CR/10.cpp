#include <iostream>

using namespace std;
int main(){
    setlocale(LC_ALL,"ru");
    double x, y;
    cin >> x >> y;
    if (y == 1 - x) {
        cout << x << " " << y;
    } else {
        cout << "Точка не принадлежит прямой";
    }
}