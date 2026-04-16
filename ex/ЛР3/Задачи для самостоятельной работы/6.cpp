#include <iostream>
#include <cmath>
double power(double x, double a) {
   return exp(x * log(a));
}
int main() {
double base, degree, result;
std::cout << "enter num: ";
std::cin >> base;
std::cout << "\nenter stepen:";
std::cin >> degree;
result = power(base, degree);
std::cout << "\nnum = " << result;

}        