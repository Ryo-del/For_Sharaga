#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a[50];

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            a[i] = '@';
        else
            a[i] = '#';
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}