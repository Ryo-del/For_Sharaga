#include <iostream> 
#include <cmath> 
 
 
int main()
{
  double a,b,c,d,x1,x2; 
 
  std::cin >> a;
  
  std::cin >> b;
  
  std::cin >> c;
 
  d = b * b - 4 * a * c;
  if (d > 0) 
  {
    x1 = ((-b) + sqrt(d)) / (2 * a);
    x2 = ((-b) - sqrt(d)) / (2 * a);
    std::cout << "x1 = " << x1 << "\n";
    std::cout << "x2 = " << x2 << "\n";
  } else {
    std::cout << "D < or = 0";
  } 
}