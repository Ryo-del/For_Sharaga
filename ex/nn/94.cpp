#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double a[50], sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double avg = sum / n;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > avg) {
            count++;
        }}

    cout << "Прошли: " << count;
}