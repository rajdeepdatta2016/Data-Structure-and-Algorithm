#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int pos) {
    int left = pos+1, right = arr.size()-1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n, pos;
    cin >> n >> pos;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    reverseArray(arr, pos);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

// TC => O(n)...
// SC => O(1)...