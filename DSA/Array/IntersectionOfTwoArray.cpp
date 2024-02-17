#include <bits/stdc++.h> 
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	bool input = false;
	int i=0,j=0;
	while(i < n && j < m) {
		if(arr1[i] == arr2[j]) {
			input = true;
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i] > arr2[j]) {
			j++;
		}
		else{
			i++;
		}
	}
	if(input == false) ans.push_back(-1);
	return ans;
}
int main() {
	int n,m,a;
	cin >> n >> m;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=0; i<n; i++) {
		cin >> a;
		arr1.push_back(a);
	}
	for(int i=0; i<m; i++) {
		cin >> a;
		arr2.push_back(a);
	}
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	vector<int> ans = findArrayIntersection(arr1, n, arr2, m);

	cout << endl << "The Intersection of the Array is :" << endl;
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}