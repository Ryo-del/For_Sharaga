#include <iostream>
using namespace std;
int main() {
int even = 0, odd = 0;


for(int i = 0; i < n; i++) {
    if(i % 2 == 0) even += a[i];
    else odd += a[i];
}

if(even > odd) cout << "Четная";
else cout << "Нечетная";
}
