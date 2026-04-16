#include <iostream>
#include <cmath>

int main(){
    int x1,x2,x3;
    int y1,y2,y3;
    std::cout << "Enter x1 x2 x3:";
    std::cin >> x1 >> x2 >> x3;
    std::cout << "Enter y1 y2 y3:";
    std::cin >> y1 >> y2 >> y3;
    float a,b,c;
    a = sqrt(std::pow((x2-x1),2)+std::pow((y2-y1),2));
    b = sqrt(std::pow((x3-x2),2)+std::pow((y3-y2),2));
    c = sqrt(std::pow((x3-x1),2)+std::pow((y3-y1),2));
    int Perimeter = a+b+c;
    int p = Perimeter/2;
    int Square = sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout << "Perimeter = " << Perimeter << std::endl;
    std::cout << "Square = " << Square;
}
