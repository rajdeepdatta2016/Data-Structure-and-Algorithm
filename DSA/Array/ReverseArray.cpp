#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr) {
    int left = 0, right = arr.size()-1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    reverseArray(arr);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}

// TC => O(n)...
// SC => O(1)...