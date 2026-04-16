#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 15;
    int arr[N];
    
    cout << "Введите " << N << " чисел:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    cout << "Положительные: ";
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) cout << arr[i] << " ";
    }
    
    cout << "\nОтрицательные: ";
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) cout << arr[i] << " ";
    }
    
    return 0;
}