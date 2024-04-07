#include <bits/stdc++.h>
using namespace std;

int countBracketReversals(string str) {
    int n = str.size();
    if (n % 2 != 0) return -1;

    stack<char> s;
    for(int i=0; i<n; i++) {
        if(str[i] == '{') s.push('{');
        else if(str[i] == '}') {
            if(s.empty()) s.push('}');
            else if(s.top() == '{') s.pop();
            else s.push('}');
        }
    }
    int ans = 0;
    while(!s.empty()) {
        char c1, c2;
        c1 = s.top();
        s.pop();
        c2 = s.top();
        s.pop();
        if(c1 == c2) ans++;
        else ans+=2;
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    int ans = countBracketReversals(s);
    cout << ans << endl;
}
