#include<iostream>
#include<vector>
using namespace std;

// Find Unique By Using XOR...
int findUniqueByXOR(vector<int>& arr, int n) {
    int res = 0;
    for(int i=0; i<n; i++) {
        res ^= arr[i];
    }
    return res;
}

// Driver Code...
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0; i<2*n+1; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int element = findUniqueByXOR(arr, 2*n+1);
    cout << "The Unique Element is = " << element << endl;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...