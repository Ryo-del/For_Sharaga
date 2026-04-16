#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    string cars[] = {"Lada", "Toyota", "BMW", "Mercedes", "Audi"};
    double prices[] = {800000, 2500000, 4500000, 5200000, 3800000};
    int n = 5;

    int max1 = 0, max2 = 0;
    double price1 = -1, price2 = -1;

    for (int i = 0; i < n; i++) {
        if (prices[i] > price1) {
            price2 = price1; max2 = max1;
            price1 = prices[i]; max1 = i;
        } else if (prices[i] > price2) {
            price2 = prices[i]; max2 = i;
        }
    }

    cout << "Самый дорогой: " << cars[max1]
         << " (" << price1 << " руб.)\n";
    cout << "Второй по стоимости: " << cars[max2]
         << " (" << price2 << " руб.)\n";

    return 0;
}