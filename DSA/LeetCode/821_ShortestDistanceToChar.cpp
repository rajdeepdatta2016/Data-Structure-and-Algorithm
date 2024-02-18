#include<bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c) {
    int n = s.length();
    vector<int> ch;
    vector<int> ans(n);
    for(int i=0; i<n; i++) {
        if(s[i] == c) ch.push_back(i);
    }
    int size = ch.size(), left = 0, right = 0;
    for(int i=0; i<n; i++) {
        if(i > ch[right]) {
            left = right;
            if(right < size - 1) right++;
        }
        ans[i] = min(abs(ch[left] - i), abs(ch[right] - i));
    }
    return ans;
}

int main() {
    string s;
    char c;
    cin >> s >> c;
    vector<int> ans = shortestToChar(s, c);
    int n = ans.size();
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
}

// Time Complexity = O(n)...
// Space Complexity = O(n)...