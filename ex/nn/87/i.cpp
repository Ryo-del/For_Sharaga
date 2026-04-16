#include <iostream>
using namespace std;

int main() {
   int n;
    cin >> n;
    int a[50];

    for(int i = 0; i < n; i++) {
        if(i % 3 == 0)
            a[i] = 0;
        else
            a[i] = 3;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}