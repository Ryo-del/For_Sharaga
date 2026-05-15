#include <iostream>
#include <cstring>

int main() {
    std::setlocale(LC_ALL, "Russian"); 
    char target[200] = "Привет мир";
    char source[] = "test ";
    int pos = 7; 
    int len = strlen(source);
    
    
    int target_len = strlen(target);
    

    for (int i = target_len + len; i >= pos; i--) {
        target[i] = target[i - len];
    }

    for (int i = 0; i < len; i++) {
        target[pos + i] = source[i];
    }
    
    std::cout << "Результат: " << target << std::endl;
 
    return 0;
}