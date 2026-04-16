#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int DAYS = 30;  // ноябрь
    double rain[DAYS];
    double total = 0;
    
    cout << "Введите количество осадков за каждый день ноября:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << ": ";
        cin >> rain[i];
        total += rain[i];
    }
    
    cout << "\nОбщее количество осадков за ноябрь: " << total << " мм\n";
    return 0;
}