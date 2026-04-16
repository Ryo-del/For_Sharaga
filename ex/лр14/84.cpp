#include <iostream>

using namespace std; 

int main() {
    int n;
    cout << "Сколько чисел? "; cin >> n;
    double a[100];
    double sum = 0, minVal, maxVal;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (i == 0) { minVal = maxVal = a[i]; }
        if (a[i] < minVal) minVal = a[i];
        if (a[i] > maxVal) maxVal = a[i];
    }

    cout << "Среднее всех: " << sum / n << endl;
    cout << "Среднее min/max" << (minVal + maxVal) / 2 << endl;
    if (n > 2) {
        cout << "Судейное: " << (sum - minVal - maxVal) / (n-2);
    }
    return 0;
}