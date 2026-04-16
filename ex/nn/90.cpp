#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double mass[50];
    int code[50];
    double sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> code[i] >> mass[i];
        sum += mass[i];
    }

    cout << "Рецепт:\n";

    for(int i = 0; i < n; i++) {
        double percent = mass[i] / sum * 100;
        cout << "Код: " << code[i] << " -> " << percent << "%\n";
    }
}