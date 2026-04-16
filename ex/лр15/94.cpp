#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 8;
    double scores[N];
    double sum = 0;
    
    cout << "Введите результаты " << N << " фигуристов:\n";
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
        sum += scores[i];
    }
    
    double average = sum / N;
    int passed = 0;
    
    for (int i = 0; i < N; i++) {
        if (scores[i] > average) passed++;
    }
    
    cout << "Средний результат: " << average << "\n";
    cout << "Прошли квалификацию: " << passed << " спортсменов\n";
    return 0;
}