#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double a[50];

    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }

    double max = a[0], min = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    cout << "Макс: " << max << endl;
    cout << "Мин: " << min;
}