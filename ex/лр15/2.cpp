#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    double prices[] = {250.5, 180.0, 320.75, 150.25, 400.0, 199.99};
    int n = 6;

    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += prices[i];

    double average = sum / n;
    cout << "Средняя стоимость: " << average << " руб.\n";
    cout << "Книги дешевле средней (номера): ";

    for (int i = 0; i < n; i++) {
        if (prices[i] < average)
            cout << i + 1 << " ";
    }
    cout << "\n";

    return 0;
}