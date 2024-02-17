#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.length();
    for(int i=0; i<size; i++) {
        int x = s[i];
        if(x < 97) {
            x += 32;
            s[i] = x;
        }
    }
    cout << s << endl; 

    // Another Process...
    string s2;
    cin >> s2;

    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    cout << s2 << endl;
}