#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> ans(m+n);
	int left = 0, right = 0, k=0;
	while(left < m && right < n) {
		if(arr1[left] < arr2[right]){
			ans[k] = arr1[left];
			left++;
		} else {
			ans[k] = arr2[right];
			right++;
		}
		k++;
	}
	while(left < m) {
		ans[k] = arr1[left];
		left++;
		k++;
	}
	while(right < n) {
		ans[k] = arr2[right];
		right++;
		k++;
	}
	return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++) cin >> arr1[i];
    for(int i=0; i<m; i++) cin >> arr2[i];
    vector<int> ans = mergeTwoSortedArray(arr1, arr2, n, m);
    for(auto it : ans) cout << it << " ";
    cout << endl;
}

// TC => O(n+m)...
// SC => O(n+m)...