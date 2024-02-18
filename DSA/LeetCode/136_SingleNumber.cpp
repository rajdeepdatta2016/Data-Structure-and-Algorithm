#include<bits/stdc++.h>
using namespace std;

int findUniqueElement(vector<int> arr) {
    int ans = 0, size = arr.size();
    for(int i=0; i<size; i++) {
        ans ^= arr[i];
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
    int uniqueElement = findUniqueElement(arr);
    cout << "Unique Element is = " << uniqueElement << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...