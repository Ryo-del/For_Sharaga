#include <iostream>

int main()
{
    int x, y, r;
    std::cout << "Введите x и y:";
    std::cin >> x;
    std::cin >> y;
    if (x > r || y > r)
    {
        std::cout << "Точка пападает в круг";
    }
    else
    {
        std::cout << "Точка не пападает в круг";
    }
}