#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 10;
    
    //а
    int arr1[N];
    int value = 7;
    for (int i = 0; i < N; i++) arr1[i] = value; 
    cout << "Массив с числом " << value << ": "; 
    for (int i = 0; i < N; i++) cout << arr1[i] << " "; //вывод
    cout << "\n\n";
    
    //б
    string arr2[N];
    cout << "Введите " << N << " слов:\n";
    for (int i = 0; i < N; i++) cin >> arr2[i];
    cout << "Введённый текст: ";
    for (int i = 0; i < N; i++) cout << arr2[i] << " ";
    cout << "\n\n";
    
    //в
    int arr3[N];
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0){
             arr3[i] = i;   
             } 
        else {
            arr3[i] = -i;  
        }                
    }
    cout << "в) Индексы с чередованием знака: ";
    for (int i = 0; i < N; i++) cout << arr3[i] << " ";
    cout << "\n\n";
    
   //г
    char arr4[N];
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 2 == 0) arr4[i] = '@';  
        else arr4[i] = '#';                    
    }
    cout << "Символы по позициям: ";
    for (int i = 0; i < N; i++) cout << arr4[i] << " ";
    cout << "\n\n";
    
    //д
    int arr5[N];
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 3 == 1) arr5[i] = 0; 
        else arr5[i] = 3;
    }
    for (int i = 0; i < N; i++) cout << arr5[i] << " ";
    cout << "\n";
    
    return 0;
}