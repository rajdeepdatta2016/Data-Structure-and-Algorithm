#include<bits/stdc++.h>
using namespace std;

vector<int> findRunningSum(vector<int> arr) {
    int size = arr.size();
    for(int i=1; i<size; i++) {
        arr[i] += arr[i-1];
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = findRunningSum(arr);
    int size = ans.size();
    for(int i=0; i<size; i++) {
        cout << ans[i] << " ";
    }
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...