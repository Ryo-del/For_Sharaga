#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void toLower(string &s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}
int main() {
    string s;
    getline(cin, s);
    toLower(s);
    cout << s << endl;
    return 0;
}