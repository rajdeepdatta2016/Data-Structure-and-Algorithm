#include<bits/stdc++.h>
using namespace std;

// Find any Peak element of an Array...
int findPeakElement(vector<int> &arr) {
    int size = arr.size();
    for(int i=0; i<size-1; i++) {
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]) return i;
    }
}

// Driver Code...
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int peak = findPeakElement(arr);
    cout << "The Peak Element is = " << peak << endl;
}