#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    reverse(nums.begin()+(n-k), nums.end());
    reverse(nums.begin(), nums.begin()+(n-k));
    reverse(nums.begin(), nums.end());
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    rotate(arr, k);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}