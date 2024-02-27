#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i=0, j=0;
    while(j < nums.size()) {
        if(nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    moveZeroes(arr);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}