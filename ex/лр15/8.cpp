#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int arr[] = {5, -3, 8, -1, 0, 12, -7, 4};
    int n = 8;

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    int writePos = 0;
    for (int readPos = 0; readPos < n; readPos++) {
        if (arr[readPos] >= 0) {
            arr[writePos++] = arr[readPos];
        }
    }

    while (writePos < n) {
        arr[writePos++] = 0;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}