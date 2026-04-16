#include <iostream>
using namespace std;

int main() {
    int n, x;
    int a[50];

    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        a[i] = x;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}