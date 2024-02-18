#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = n-1;
    int i=0;
    while(i<=right) {
        if(nums[i] == 2) {
            swap(nums[i], nums[right]);
            right--;
        } else if(nums[i] == 0) {
            swap(nums[i], nums[left]);
            left++;
            if(i < left) i=left;
        } else i++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter 0,1,2 :" << endl;
    for(int i=0; i<n; i++) cin >> arr[i];
    sortColors(arr);
    cout << "Sorted Colors are: " << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}