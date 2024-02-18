#include<bits/stdc++.h>
using namespace std;

bool divideArray(vector<int> arr) {
    int n = arr.size();
    if(n%2 != 0) return false;
    else {
        vector<int> freq(501, 0);
        bool isPossible = true;
        for(int i=0; i<n; i++) {
            freq[arr[i]]++;
        }
        for(int i=0; i<=500; i++) {
            if(freq[i]%2 != 0) {
                isPossible = false;
                break;
            }
        }
        return isPossible;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    bool isPossible = divideArray(vec);
    if(isPossible) cout << "Division is Possible" << endl;
    else cout << "Division is not Possible" << endl;
}

// Time Complexity = O(n)... 
// Space Comeplecity = O(1)...
