#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int> arr) {
    vector<int> freq(101, 0);
    int ans = 0, size = arr.size();
    for(int i=0; i<size; i++) {
        freq[arr[i]]++;
    }
    for(int i=0; i<=100; i++) {
        ans += (freq[i]*(freq[i]-1))/2;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int pairs = numIdenticalPairs(arr);
    cout << "Total Identical Pairs are = " << pairs << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...