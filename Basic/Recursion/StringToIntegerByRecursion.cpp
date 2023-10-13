#include<iostream>
#include<string>
using namespace std;
int ConvertInteger(int i, string& s) {
    if(i < 0) return 0;
    int z = (s[i])-'0';
    return z + ConvertInteger(i-1,s)*10;
}
int main() {
    string s;
    cin >> s;
    cout << ConvertInteger(s.length()-1,s);
}