//-- ��������� ���������� �������������� ���� "�" � ��������� ������ --
#include <iostream>                  // ��� system
int main()
{
    
    char stroka[50];
    int i;
    int count;
    std::cout << "Enter string";
    std::cin >> stroka;
    i = 0;
    while (stroka[i] != '\n')
    {
       if (stroka[i] == 'a' || stroka[i] == 'A') {
        count++;
        std::cout << "index" << i << std::endl;
       
       }
        i++;
    }
    std::cout << "Count: " << count;
}
