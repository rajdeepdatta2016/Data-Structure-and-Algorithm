#include<bits/stdc++.h>
using namespace std;

int stringToNumber(char input[]) {
    if(input[0] == '\0') return 0;
    int el = input[0];
    el = el - 48;
    int num = stringToNumber(input+1);
    int ps = strlen(input) -1;
    el = el* pow(10, ps) + num;
    return el;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}