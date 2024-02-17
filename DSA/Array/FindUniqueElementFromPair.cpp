#include<iostream>
#include<vector>
using namespace std;

// Find Unique By Checking corresponding element after sorting...
int findUnique(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i+=2) {
        if(arr[i] != arr[i+1]) return arr[i];
    }
    return -1;
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
    int element = findUnique(arr, 2*n+1);
    cout << "The Unique Element is = " << element << endl;
}