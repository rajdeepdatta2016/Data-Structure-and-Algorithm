#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char ch[]) {
    if(ch[0] == '\0') return;
    if(ch[0] != ch[1]) removeConsecutiveDuplicates(ch + 1);
    else {
        int i=1;
        for(; ch[i] != '\0'; i++) {
            ch[i-1] = ch[i];
        }
        ch[i-1] = ch[i];
        removeConsecutiveDuplicates(ch);
    }
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}