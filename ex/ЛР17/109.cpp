#include <iostream>
#include <cstring>

int main() {
     std::setlocale(LC_ALL, "Russian"); 
    char str[100] = "Программирование";
    int pos = 3;      
    int count = 5;  
    
    int len = strlen(str);
    if (pos < 0) pos = 0;
    if (pos + count > len) count = len - pos;
    

    for (int i = pos; i <= len - count; i++) {
        str[i] = str[i + count];
    }
    
    std::cout << "Результат: " << str << std::endl;

    return 0;
}