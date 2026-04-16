#include <iostream>
using namespace std;
int main() {
int min = a[0], max = a[0];

for(int i = 1; i < n; i++) {
    if(a[i] < min) min = a[i];
    if(a[i] > max) max = a[i];
}

cout << max - min;
}