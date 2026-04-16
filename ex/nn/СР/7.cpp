#include <iostream>

using namespace std;

int main() {
    int max1 = 0, max2 = 0;

for(int i = 0; i < n; i++) {
    if(a[i] > max1) {
        max2 = max1;
        max1 = a[i];
    } else if(a[i] > max2) {
        max2 = a[i];
    }
}
}