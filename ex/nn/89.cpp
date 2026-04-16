#include <iostream>
using namespace std;

int main() {
    int a[15];

    for(int i = 0; i < 15; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 15; i++) {
        if(a[i] > 0) {
            cout << a[i] << " ";
        }}

    cout << endl;

    for(int i = 0; i < 15; i++) {
        if(a[i] < 0) {
            cout << a[i] << " ";
    }
}
}