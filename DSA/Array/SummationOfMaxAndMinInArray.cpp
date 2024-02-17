#include<bits/stdc++.h>
using namespace std;

// Find Summation of Max & Min...
int sumOfMaxMin(vector<int> arr, int n){
	int max = INT_MIN, min = INT_MAX;
    for(int i=0; i<n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    return max+min;
}

// Driver Code...
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
        
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sumOfMaxMin(arr, n);
    cout<<ans<<endl;
}