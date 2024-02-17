#include <bits/stdc++.h> 
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
	int pair=0,i=0,j=n-1;

	while(i<j){  
		int sum =arr[i]+arr[j];  
		if(sum==target){  
			pair++;
			i++; 
			j--; 
		} 
		else if(sum < target){ 
			i++;  
		} 
		else { 
			j--; 
		}
	} 
	if(pair==0){ 
		return -1;
	} 
	return pair;
}
int main() {
	int a,n;
	cin >> n;
	vector<int> arr;
	for(int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	int target;
	cout << "Enter Target: ";
	cin >> target;
	int pair = pairSum(arr, n, target);
	cout << "No. of Pairs = " << pair;
}