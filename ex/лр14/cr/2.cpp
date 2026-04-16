#include <iostream>
using namespace std;
double calcRange(double arr[], int n) {
    double min = arr[0], max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    return max - min;
}
int main() {
    int n;
    cin >> n;
    double arr[100];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << calcRange(arr, n) << endl;
    return 0;
}