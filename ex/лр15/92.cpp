#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int GROUPS = 10;
    int students[GROUPS];
    int sum = 0;
    
    cout << "Введите число студентов в каждой из " << GROUPS << " групп:\n";
    for (int i = 0; i < GROUPS; i++) {
        cin >> students[i];
        sum += students[i];
    }
    
    double average = (double)sum / GROUPS;
    cout << "Среднее число студентов в группе: " << average << "\n";
    return 0;
}