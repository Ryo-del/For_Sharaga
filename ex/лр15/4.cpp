#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int arr[] = {5, 3, 8, 1, 3, 9};
    int n = 6;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) {
                cout << "Одинаковые есть: " << i << " и " << j << '\n';
                return 0;
            }
        }
    }
    cout << "Одинаковых нет!" << '\n';
    return 0;
}