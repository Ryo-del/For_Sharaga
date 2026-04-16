#include <iostream>
#include <string>
using namespace std;
void removeEnglish(string &s) {
    string res = "";
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        bool isEng = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
        if(!isEng) res += c;
    }
    s = res;
}
int main() {
    string s;
    getline(cin, s);
    removeEnglish(s);
    cout << s << endl;
    return 0;
}