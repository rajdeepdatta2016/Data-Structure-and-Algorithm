#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;

    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    cout << "Enter Operation to do : ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Answer = " << a+b;
            break;
        case '-':
            cout << "Answer = " << a-b;
            break;
        case '*':
            cout << "Answer = " << a*b;
            break;
        case '/':
            cout << "Answer = " << a/b;
            break;
        case '%':
            cout << "Answer = " << a%b;
            break;

        default:
            cout <<"Wrong Input: Enter valid Input";
    }
}