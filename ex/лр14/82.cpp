#include <iostream>

using namespace std; 

int find(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Введите 2 числа: ";
    cin >> num1 >> num2;

    if( num1 <= 0 || num2 <= 0) {
        cout << "Числа должны быть положительными!";
    }

    int g = find(num1, num2);
    cout << g;
}