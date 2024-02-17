#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s1;
    cin >> s1;

    int freq[26];
    for(int i=0; i<26; i++) {
        freq[i] = 0;
    }
    int size = s1.size();
    for(int i=1; i<size; i++) {
        freq[s1[i] - 'a']++;
    }

    int maxF = 0;
    char ans = 'a';
    for(int i=0; i<26; i++) {
        if(maxF < freq[i]) {
            maxF = freq[i]; 
            ans = i+'a';
        }
    }

    cout << "Maximum Frequency Character is = " << ans << " and the Frequency is = " << maxF << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...