#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    
    const char* tests[] = {"123", "123абв", "12.34", "  -456  ", "abc", ""};
    
    std::cout << "Тестирование преобразования строки в число:" << std::endl;
    
    for (int t = 0; t < 6; t++) {
        const char* str = tests[t];
        int result = 0;
        bool ok = true;
        int i = 0;
        
        while (str[i] == ' ') i++;
        
        int sign = 1;
        if (str[i] == '+' || str[i] == '-') {
            if (str[i] == '-') sign = -1;
            i++;
        }
        
        if (!isdigit(str[i])) { ok = false; }
        else {
            while (isdigit(str[i])) {
                result = result * 10 + (str[i] - '0');
                i++;
            }
            result *= sign;
            while (str[i] == ' ') i++;
            if (str[i] != '\0') ok = false;
        }
        
        if (ok) std::cout << "\"" << str << "\" -> " << result << " [OK]" << std::endl;
        else std::cout << "\"" << str << "\" -> [ERROR]" << std::endl;
    }
    return 0;
}