#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cin >> a >> b;
    cout << (b % a == 0 ? "a - делитель b" : "a не делитель b") << endl;
    cout << (a % b == 0 ? "b - делитель a" : "b не делитель a");
}