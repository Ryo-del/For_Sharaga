#include <iostream>
using namespace std;

int main() {
    int a[30];
    int sum = 0;

    for(int i = 0; i < 30; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Сумма осадков: " << sum;
}