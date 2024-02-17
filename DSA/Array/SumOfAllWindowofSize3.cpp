#include<bits/stdc++.h>
using namespace std;

int findSumOfWindows(int * arr, int n, int k) {
    int ans = arr[0]+arr[1]+arr[2];
    int prevRes = ans;
    for(int i=1; i<n-k+1; i++) {
        int temp = prevRes - arr[i-1] + arr[i+2];
        prevRes = temp;
        ans += temp;
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = findSumOfWindows(arr, n, k);
    cout << "Answer is = " << ans << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...