#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int CURRENT_YEAR = 2026;
    int birthYears[] = {1990, 1985, 2000, 1978, 2010};
    int n = 5;

    int minYear = birthYears[0];
    int maxYear = birthYears[0];

    for (int i = 1; i < n; i++) {
        if (birthYears[i] < minYear) minYear = birthYears[i];
        if (birthYears[i] > maxYear) maxYear = birthYears[i];
    }

    int oldestAge = CURRENT_YEAR - minYear;
    int youngestAge = CURRENT_YEAR - maxYear;
    int difference = oldestAge - youngestAge;

    cout << "Самый старший: " << oldestAge << " лет (год рождения: " << minYear << ")\n";
    cout << "Самый младший: " << youngestAge << " лет (год рождения: " << maxYear << ")\n";
    cout << "Разница в возрасте: " << difference << " лет\n";

    return 0;
}