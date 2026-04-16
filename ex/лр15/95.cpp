#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 10;
    double results[N];
    
    cout << "Введите результаты " << N << " прыгунов:\n";
    for (int i = 0; i < N; i++) cin >> results[i];
    
    double best = results[0];
    double worst = results[0];
    
    for (int i = 1; i < N; i++) {
        if (results[i] > best) best = results[i];
        if (results[i] < worst) worst = results[i];
    }
    
    cout << "Лучший результат: " << best << " м\n";
    cout << "Худший результат: " << worst << " м\n";
    return 0;
}