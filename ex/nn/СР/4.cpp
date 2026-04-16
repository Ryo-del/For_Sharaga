#include <iostream>
using namespace std;
int main() {
bool found = false;

for(int i = 0; i < n; i++)
    for(int j = i+1; j < n; j++)
        if(a[i] == a[j])
            found = true;

cout << (found ? "Да" : "Нет");
}