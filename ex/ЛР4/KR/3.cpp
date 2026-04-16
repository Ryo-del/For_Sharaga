#include <iostream>
int a, b;
int main()
{
    setlocale(LC_ALL, "ru");
    if (a == 0)
    {
        if (b == 0)
        {
            std::cout << "Уравнение имеет бесконечное множество решений!";
        }
        else
        {
            std::cout << "Уравнений не имеет решения!";
        }
    }
    else
    {
        std::cout << "х = " << -b / a;
    }
}