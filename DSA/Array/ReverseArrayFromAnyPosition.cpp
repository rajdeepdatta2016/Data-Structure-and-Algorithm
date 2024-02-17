#include<bits/stdc++.h>
using namespace std;

// Reverse the Vector from a position..
void reverseArray(vector<int> &arr , int m) {
    reverse(arr.begin()+m+1, arr.end());
}

// Driver Code...
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, m);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}