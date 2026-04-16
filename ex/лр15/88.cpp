#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 15;
    int arr[N];
    
    cout << "Введите " << N << " чисел:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    cout << "В обратном порядке: ";
    for (int i = N - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}