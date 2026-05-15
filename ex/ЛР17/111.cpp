#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    
    char str[500] = "Артем идёт.    Артем тоже. Артем дома.";
    char oldWord[] = "полковник";
    char newWord[] = "генерал";
    
    int str_len = strlen(str);
    int old_len = strlen(oldWord);
    int new_len = strlen(newWord);
    
    char result[1000] = "";
    int res_pos = 0;
    
    for (int i = 0; i < str_len; ) {
        bool is_word_start = (i == 0 || str[i-1] == ' ' || str[i-1] == '.' || 
                              str[i-1] == ',' || str[i-1] == '!' || str[i-1] == '?');
        bool match = true;
        
        if (is_word_start && i + old_len <= str_len) {
            for (int j = 0; j < old_len; j++) {
                if (str[i + j] != oldWord[j]) { match = false; break; }
            }
            if (match && i + old_len < str_len) {
                char next = str[i + old_len];
                if (next != ' ' && next != '.' && next != ',' && next != '!' && 
                    next != '?' && next != ';' && next != '-' && next != '\0') {
                    match = false;
                }
            }
        } else {
            match = false;
        }
        
        if (match) {
            for (int j = 0; j < new_len; j++) result[res_pos++] = newWord[j];
            i += old_len;
        } else {
            result[res_pos++] = str[i++];
        }
    }
    result[res_pos] = '\0';
    strcpy(str, result);
    
    std::cout << str << std::endl;
    return 0;
}