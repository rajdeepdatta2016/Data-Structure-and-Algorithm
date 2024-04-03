#include<stack>
#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string expression) 
{
    stack<char> s;
    for(int i=0; i<expression.size(); i++) {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
            s.push(expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']') {
            if(s.empty()) return false;
            if(expression[i] == ')' && s.top() == '(') s.pop();
            else if(expression[i] == '}' && s.top() == '{') s.pop();
            else if(expression[i] == ']' && s.top() == '[') s.pop();
            else return false;
        }
    }
    if(s.empty()) return true;
    return false;
}

int main() {
    if(isBalanced(")()()(")) cout << "True" << endl;
    else cout << "False" << endl;
}