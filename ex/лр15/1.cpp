#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int heights[] = {-170, 165, -175, 160, -180, 155, -168, 172};
    int n = 8; 
    
    double sumBoys = 0, sumGirls = 0;
    int countBoys = 0, countGirls = 0;

    for (int i = 0; i < n; i++) {
        int h = heights[i];
        if (h < 0) {
            sumBoys += abs(h);
            countBoys++;
        } else if (h > 0) {
            sumGirls += h;
            countGirls++;
        }
    }

    if (countBoys > 0)
        cout << "Средний рост юношей: " << sumBoys / countBoys << " см\n";
    else
        cout << "Нет данных о юношах\n";

    if (countGirls > 0)
        cout << "Средний рост девушек: " << sumGirls / countGirls << " см\n";
    else
        cout << "Нет данных о девушках\n";

    return 0;
}