#include <iostream>

int main() {
    double len;
    std::cin >> len;
    double metr = len/0.0254;
    int wmetr = (int)metr;
    double ost = metr - wmetr; //остаток
    double canti = ost * 100; 
    int wcanti = int(canti);
    double mili = (canti-wcanti) * 10;
    mili = (int)(mili * 10 + 0.5) / 10; //округление 
   
    
    std::cout << "metr: " << metr << " santimetr: " <<canti<< " milimetr: " << mili; 
}