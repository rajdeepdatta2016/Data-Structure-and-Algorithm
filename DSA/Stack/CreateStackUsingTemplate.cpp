#include<bits/stdc++.h>
#include "StackTemplate.h"
using namespace std;

int main() {
    Stack<double> s1;
    s1.push(10.23);
    s1.push(20.34);
    s1.push(30.34);
    s1.push(40.34);
    s1.push(50.65);
    s1.push(60.21);
    s1.push(70.56);
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.top() << endl;
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    cout << s1.isEmpty() << endl << endl;

    Stack<char> s2;
    s2.push('P');
    s2.push('E');
    s2.push('R');
    s2.push('T');
    s2.push('A');
    s2.push('M');
    s2.push('N');
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.top() << endl;
    cout << s2.top() << endl;
    cout << s2.size() << endl;
    cout << s2.isEmpty() << endl << endl;

    Stack<int> s3;
    s3.push(10);
    s3.push(20);
    s3.push(30);
    s3.push(40);
    s3.push(50);
    s3.push(60);
    s3.push(70);
    cout << s3.pop() << endl;
    cout << s3.pop() << endl;
    cout << s3.top() << endl;
    cout << s3.top() << endl;
    cout << s3.size() << endl;
    cout << s3.isEmpty() << endl << endl;
}