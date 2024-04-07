#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int>& input) {
    stack<int> extra;
    stack<int> temp;
    while(!input.empty()) {
        extra.push(input.top());
        input.pop();
    }
    while(!extra.empty()) {
        temp.push(extra.top());
        extra.pop();
    }
    while(!temp.empty()) {
        input.push(temp.top());
        temp.pop();
    }
}

int main() {
    int n, data;
    cin >> n;
    stack<int> s;
    for(int i=0; i<n; i++) {
        cin >> data;
        s.push(data);
    }
    reverseStack(s);
    for(int i=0; i<n; i++) {
        cout << s.top() << " ";
        s.pop();
    }
}