#include <iostream>
#include <cmath>
using namespace std;
double dist3d(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2));
}
int main() {
    double x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cout << dist3d(x1, y1, z1, x2, y2, z2) << endl;
    return 0;
}