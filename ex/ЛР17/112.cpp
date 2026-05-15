#include <iostream>
#include <cstring>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    
    char text[] = "  Привет,   мир!  Как   дела?  ";
    
    int count_a = 0;
    bool in_word = false;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && !in_word) { count_a++; in_word = true; }
        else if (text[i] == ' ') in_word = false;
    }
    
    int count_b = 0;
    in_word = false;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && !in_word) { count_b++; in_word = true; }
        else if (text[i] == ' ') in_word = false;
    }
    
    int count_c = 0;
    in_word = false;
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        bool is_delim = (c == ' ' || c == ',' || c == '.' || c == '!' || c == '?' || c == ';' || c == '-');
        if (!is_delim && !in_word) { count_c++; in_word = true; }
        else if (is_delim) in_word = false;
    }
    
    int count_d = count_c;
    
    std::cout << "а) один пробел: " << count_a << std::endl;
    std::cout << "б) много пробелов: " << count_b << std::endl;
    std::cout << "в) один разделитель: " << count_c << std::endl;
    std::cout << "г) много разделителей: " << count_d << std::endl;
    
    return 0;
}