#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i=m-1, j=n-1, lastIndex=m+n-1;
    while(j >= 0) {
        if(i >= 0 && arr1[i] > arr2[j]) {
            arr1[lastIndex] = arr1[i];
            i--;
        } else {
            arr1[lastIndex] = arr2[j];
            j--;
        }
        lastIndex--;
    }
    return arr1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n+m, 0);
    vector<int> arr2(m);
    for(int i=0; i<n; i++) cin >> arr1[i];
    for(int i=0; i<m; i++) cin >> arr2[i];
    vector<int> ans = mergeTwoSortedArray(arr1, arr2, n, m);
    for(auto it : ans) cout << it << " ";
    cout << endl;
}

// TC => O(m+n)...
// SC => O(1)...