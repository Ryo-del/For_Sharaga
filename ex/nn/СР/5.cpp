#include <iostream>
using namespace std;
int main() {
for(int i = 1; i < n; i++) {
    if(a[i] < a[i-1]) {
        cout << "Нарушение на " << i;
        return 0;
    }
}
cout << "Упорядочен";
}