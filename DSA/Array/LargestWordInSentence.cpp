#include<bits/stdc++.h>
using namespace std;

void findLargestWord(char* ch) {
    int currLen=0, maxLen=0;
    for(int i=0; ch[i] != '\0'; i++) {
        if(ch[i] == ' ') {
            maxLen = max(currLen, maxLen);
            currLen = 0;
        } else {
            currLen++;
            if(ch[i+1] == '\0') maxLen = max(currLen, maxLen);
        }
    }
    cout << "Maximum Length = " << maxLen;
}

int main() {
    char ch[1000000];
    cin.getline(ch, 1000000);
    findLargestWord(ch);
}