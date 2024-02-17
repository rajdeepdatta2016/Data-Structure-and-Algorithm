#include<bits/stdc++.h>
using namespace std;

int maximumProfit(int arr[], int n) {
    int ans = 0, currAns=0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        int count = n-i;
        currAns = arr[i] * count;
        ans = max(currAns, ans);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int * input = new int[n];
    for(int i=0; i<n; i++)
        cin>>input[i];
    cout << maximumProfit(input, n) << endl;
}

// Time Complexity = O(nlogn)
// Space Complexity = O(logn)...