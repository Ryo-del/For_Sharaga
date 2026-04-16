#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int residents[] = {0, 5, 3, 8, 2, 6, 4, 7, 1};
    int n = 9;

    int evenSide = 0, oddSide = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            evenSide += residents[i];
        else
            oddSide += residents[i];
    }

    cout << "Жителей на чётной стороне: " << evenSide << "\n";
    cout << "Жителей на нечётной стороне: " << oddSide << "\n";

    if (evenSide > oddSide)
        cout << "Больше жителей на чётной стороне\n";
    else if (oddSide > evenSide)
        cout << "Больше жителей на нечётной стороне\n";
    else
        cout << "Жителей поровну на обеих сторонах\n";

    return 0;
}