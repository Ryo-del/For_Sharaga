#include <iostram>
#include <cmath>

int a, b, c, D, x1, x2;
int main()
{
    std::cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "x1 = " << x1 << "x2 = " << x2;
    }
    else if (D == 0)
    {
        std::cout << -b / (2 * a);
    }
    else
    {
        std::cout << "net kornei";
    }
}