#include <iostream>
using namespace std;

int main() {
    int n;
    char a[50];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}