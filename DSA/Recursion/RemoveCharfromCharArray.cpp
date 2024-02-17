#include<iostream>
using namespace std;

void removeChar(char ch[], char x) {
    if(ch[0] == '\0') return;
    if(ch[0] != x) removeChar(ch+1, x);
    else {
        int i=1;
        for(; ch[i] != '\0'; i++) {
            ch[i-1] = ch[i];
        } 
        ch[i-1] = '\0';
        removeChar(ch,x);
    }
}

int main() {
    char ch[100], x;
    cin >> ch >> x;
    removeChar(ch, x);
    cout << ch;
}