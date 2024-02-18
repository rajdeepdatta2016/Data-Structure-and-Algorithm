#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> nums) {
    int n = nums.size();
        int left = 0, right = n-1;
        vector<int> res(n);
        int k = n-1;
        while(right >= left) {
            if(abs(nums[right]) >= abs(nums[left])) {
                res[k] = nums[right];
                right--;
            } else {
                res[k] = nums[left];
                left++;
            }
            k--;
        }
        for(int i=0; i<n; i++) {
            res[i] = res[i] * res[i];
        }
        return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Element in Sorted Manner:" << endl;
    for(int i=0; i<n; i++) cin >> arr[i];
    vector<int> ans = sortedSquares(arr);
    int size = ans.size();
    for(int i=0; i<size; i++) {
        cout << ans[i] << " ";
    }
}