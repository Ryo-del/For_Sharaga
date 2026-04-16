#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int arr[] = {1, 3, 5, 4, 8, 10};
    int n = 6;
    bool isSorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            cout << "Массив не упорядочен!\n";
            cout << "Элемент с индексом " << i
                 << " (значение: " << arr[i]
                 << ") нарушает упорядоченность\n";
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Массив упорядочен по возрастанию\n";

    return 0;
}