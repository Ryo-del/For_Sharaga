#include <iostream>

int main(){
    int time_in_minutes;
    std::cin >> time_in_minutes;
    int hour = time_in_minutes / 60;
    int minuts = time_in_minutes % 60;
    std::cout << hour << "hours and minutes " << minuts; 
}