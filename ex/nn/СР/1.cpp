#include <iostream>
using namespace std;
int main() {
double boys = 0, girls = 0;
int cb = 0, cg = 0;
int n;
    cin >> n;

for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < 0) { boys += -a[i]; cb++; }
    else { girls += a[i]; cg++; }
}

cout << boys/cb << " " << girls/cg;
}