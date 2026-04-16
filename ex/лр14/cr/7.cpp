#include <iostream>
#include <string>
using namespace std;
void checkId(string s, bool &isValid) {
    if(s.empty()) { isValid = false; return; }
    char first = s[0];
    bool firstOk = (first >= 'a' && first <= 'z') || (first >= 'A' && first <= 'Z');
    if(!firstOk) { isValid = false; return; }
    for(int i = 1; i < s.length(); i++) {
        char c = s[i];
        bool ok = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_';
        if(!ok) { isValid = false; return; }
    }
    isValid = true;
}
int main() {
    string s;
    cin >> s;
    bool res;
    checkId(s, res);
    if(res) cout << "Идентификатор" << endl;
    else cout << "Не идентификатор" << endl;
    return 0;
}