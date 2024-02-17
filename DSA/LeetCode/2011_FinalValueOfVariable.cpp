#include<bits/stdc++.h>
using namespace std;

int findValueAfterOperation(vector<string> arr) {
    int ans = 0;
    int size = arr.size();
    for(int i=0; i<size; i++) {
        if(arr[i] == "++X" || arr[i] == "X++") ans++;
        else ans--;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = findValueAfterOperation(arr);
    cout << "Final Value = " << ans << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...