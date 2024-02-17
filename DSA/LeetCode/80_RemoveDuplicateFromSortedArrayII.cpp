#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0;
    for(int num : nums) {
        if(i<2 || num != nums[i-2]) {
            nums[i] = num;
            i++;
        }
    } 
    return i;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int size = removeDuplicates(arr);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}