
#include <iostream>                  

int main()
{
  char s[80];
  int i;
  std::cout << "Enter word";
  std::cin >> s;
  i = 0; 
  while ( s[i] != '\0' ) 
   {
        if ( s[i] == 'a' ) {
            s[i] = 'b';
            i ++;
        }
        if (s[i] == 'b') {
            s[i] = 'a'
            i++
        }   
    }
  std::cout << "Your word: " << s;

}
