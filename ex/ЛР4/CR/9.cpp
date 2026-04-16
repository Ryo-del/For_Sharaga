#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            std::cout << "2";
        }
        else if (y < 0)
        {
            std::cout << "4";
        }
        else
        {
            std::cout << "x положительный, а y лежит на начале координат.";
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            std::cout << "1";
        }
        else if (y < 0)
        {
            std::cout << "3";
        }
        else
        {
            std::cout << "x отрицательный, а y лежит на начале координат.";
        }
    }
    else
    {
        std::cout << "Обе точки лежат на начаеле координат!";
    }
}