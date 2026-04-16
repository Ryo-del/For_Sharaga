#include <iostream>

int main() {

    int nums[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> nums[i];
    }
    int max = nums[0];
    int min = nums[0];
    for (int i = 1; i < 3; i++){
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    std::cout <<"max = "<< max << std::endl;
    std::cout <<"min = "<< min << std::endl;
}  