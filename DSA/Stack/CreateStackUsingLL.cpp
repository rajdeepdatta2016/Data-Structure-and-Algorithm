#include<bits/stdc++.h>
using namespace std;
#include "StackByLinkedList.h"

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout << s1.size() << endl;
    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    cout << s1.isEmpty() << endl << endl;

    Stack<char> s2;
    s2.push('A');
    s2.push('B');
    s2.push('C');
    s2.push('D');
    cout << s2.size() << endl;
    cout << s2.top() << endl;
    cout << s2.pop() << endl;
    cout << s2.top() << endl;
    cout << s2.size() << endl;
    cout << s2.isEmpty() << endl << endl;

}