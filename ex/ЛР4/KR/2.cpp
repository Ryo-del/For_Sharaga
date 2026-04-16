#include <iostream>
int r, a;

int main()
{
    setlocale(LC_ALL, "ru");
    std::cin >> r >> a;
    if ((r * 2) <= a)
    {
        std::cout << "круг можно поместить в квадрат!";
    }
    else
    {
        std::cout << "квадрат можно поместить в круг!";
    }
}