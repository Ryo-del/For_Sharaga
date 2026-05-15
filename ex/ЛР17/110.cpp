#include <iostream>
#include <cstring>
   
int main() { 
    std::setlocale(LC_ALL, "Russian"); 
    char text[] = "Мама бабушка мама бабушка";
    char pattern[] = "бабушка"; 
    int text_len = strlen(text);
    int pat_len = strlen(pattern);
    
    std::cout << "Поиск \"" << pattern << "\":" << std::endl;
    
    for (int i = 0; i <= text_len - pat_len; i++) {
        bool found = true;
        for (int j = 0; j < pat_len; j++) {
            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            std::cout << "Найдено на позиции: " << i << std::endl;
        }
    }
    return 0;
}