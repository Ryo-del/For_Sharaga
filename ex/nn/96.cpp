#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[50];
    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(a[i] == 2) c2++;
        if(a[i] == 3) c3++;
        if(a[i] == 4) c4++;
        if(a[i] == 5) c5++;
    }

    cout << "2: " << c2 << endl;
    cout << "3: " << c3 << endl;
    cout << "4: " << c4 << endl;
    cout << "5: " << c5;
}