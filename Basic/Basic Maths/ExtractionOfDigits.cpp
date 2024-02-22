#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    int num;
    cin >> num;
    while(num > 0) {
        s.push(num%10);
        num /= 10;
    }
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

// Time Complexity = O(logn)...
// Space Complexity = O(logn)...