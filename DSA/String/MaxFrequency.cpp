#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    int arr[26], temp;
    sort(s1.begin(), s1.end());
    int currF=1;
    for(int i=0; i<26; i++) {
        arr[i] = 0;
    }
    for(int i=1; i<s1.size(); i++) {
        if(s1[i] != s1[i-1]) {
            temp = s1[i-1] - 97;
            arr[temp] = currF;
            currF = 0;
        }
    }
    int max = 0;
    for(int i=1; i<26; i++) {
        if(arr[max] < arr[i]) max = i;
    }
    char c = max+97;
    cout << c;
}