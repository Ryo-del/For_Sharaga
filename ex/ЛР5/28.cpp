/*#include <iostream>
#include <stdio.h>
#include <conio.h>
main()
{setlocale(LC_ALL, "Russian");
 char c;
 printf("\nvvedite nomer dny nedeli:");
 scanf("%d", &c); // ввести букву
switch ( c ) // заголовок оператора выбора
{
case 1: printf("\nponedelnik\n\n"); break;
case 2: printf("\nvtornik\n\n"); break;
case 3: printf("\nsreda\n\n"); break;
case 4: printf("\nchetverg\n\n"); break;
case 5: printf("\npatnica\n\n"); break;
case 6: printf("\nsybbota\n\n"); break;
case 7: printf("\nvoskresenie\n\n"); break;
case 8: printf("vtornik vam ne patnica\n\n"); break;
case 0: printf("\nponedelnik nachinaetca v cyboty\n\n"); break;

default: printf("\nnet na nedele takogo dna\n\n"); // по умолчанию
}
system(" pause ");
} */

#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int choise;
    std::cout << "Введите номер дня недели: ";
    std::cin >> choise;
    switch (choise)
    {
    case 0:
        std::cout << "понедельник начинается в субботу?";
        break;
    
    case 1:
        std::cout << "понедельник";
        break;
    case 2:
        std::cout << "Вторник";
        break;
    
    case 3:
        std::cout << "Среда";
        break;
    
    case 4:
        std::cout << "Четверг";
        break;
    
    case 5:
        std::cout << "Пятница";
        break;
    case 6:
        std::cout << "Суббота";
        break;
    case 7:
        std::cout << "Воскресенье";
        break;
    case 8:
        std::cout << "Вторник вам не пятница!";
        break;
    
    default:
        std::cout << "Такого дня недели не су";
        break;
    }
}