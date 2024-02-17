#include<iostream>
using namespace std;
int findDuplicate(vector<int> &arr) {
    int ans = 0, size = arr.size();
    for(int i=0; i<size; i++) {
        ans = ans^arr[i];
    }
    for(int i=1; i<size; i++) {
        ans = ans^i;
    }
    return ans;
}
int main() {
    int v,n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> v;
        arr.push_back(v);
    }
    int duplicate = findDuplicate(arr);
    cout << "Duplicate Value is = " << duplicate << endl;
    return 0;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...