#include<bits/stdc++.h>
using namespace std;

int tripletSum(int * arr, int n, int key) {
    sort(arr, arr+n);
    int ans = 0;
    for(int i=0; i<n-2; i++) {
        int left = i+1, right = n-1;
        while(left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if(currentSum < key) left++;
            else if(currentSum > key) right--;
            else {
                ans++;
                int tempRight = right-1;
                while(tempRight > left) {
                    if(arr[tempRight] == arr[right]) {
                        ans++;
                        tempRight--;
                    } else break;
                }
                left++;
            }
        }
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
    int ans = tripletSum(arr, n, k);
    cout << "Total Triplets are = " << ans << endl;
    delete [] arr;
}

// Time Complexity = O(n^2)...
// Space Complexity = O(logn)...