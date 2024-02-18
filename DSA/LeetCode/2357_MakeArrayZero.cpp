#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int> arr) {
    vector<int> v1(101, 0);
    int size = arr.size(), count = 0;
    for(int i=0; i<size; i++) {
        v1[arr[i]] = 1;
    }
    for(int i=1; i<=100; i++) {
        if(v1[i] == 1) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int operations = minimumOperations(arr);
    cout << "Minimum Number of Operations = " << operations << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...