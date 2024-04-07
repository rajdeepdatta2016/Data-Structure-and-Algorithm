#include<bits/stdc++.h>
using namespace std;

bool checkRedundantBrackets(string str) {
    stack<char> s;
    int count = 0;
    for(int i=0; i<str.size(); i++) {
        if(str[i] == '(') s.push('(');
        else if(!s.empty() && str[i] != ')') s.push(str[i]);
        else if(str[i] == ')') {
            while(s.top() != '(') {
                count++;
                s.pop();
            }
            s.pop();
            if(count < 3) return true;
            count = 0;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    if(checkRedundantBrackets(s)) cout << "true" << endl;
    else cout << "false" << endl;
}