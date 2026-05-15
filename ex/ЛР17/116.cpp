#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::string line;
    std::cout << "Введите строку: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::string word;
    std::vector<std::string> words;

    // Сохраняем слова в вектор для удобства выполнения всех пунктов
    while (ss >> word) {
        words.push_back(word);
    }

    std::cout << "\n--- Все слова в столбик ---\n";
    for (const auto& w : words) std::cout << w << std::endl;

    std::cout << "\nа) Слова на букву 'л':\n";
    for (const auto& w : words) {
        if (!w.empty() && (w[0] == 'л' || w[0] == 'Л')) std::cout << w << std::endl;
    }

    std::cout << "\nб) Слова на букву 'ь':\n";
    for (const auto& w : words) {
        if (!w.empty() && w.back() == 'ь') std::cout << w << std::endl;
    }

    std::cout << "\nв) Слова длиной не менее 5 букв:\n";
    for (const auto& w : words) {
        // Учитываем, что в кириллице один символ может занимать больше 1 байта
        // Но для базовых задач обычно достаточно w.length()
        if (w.length() >= 5) std::cout << w << std::endl;
    }

    std::cout << "\nг) Самое длинное слово:\n";
    std::string longest = "";
    for (const auto& w : words) {
        if (w.length() > longest.length()) longest = w;
    }
    std::cout << longest << std::endl;

    return 0;
}
