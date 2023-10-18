#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > pairSum(vector<int> &arr, int s){
   vector<vector<int> > pair;
   for(int i=0; i<arr.size(); i++) {
      for(int j=i+1; j<arr.size(); j++) {
         if(arr[i]+arr[j] == s) {
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            pair.push_back(temp);
         }
      }
   }
   sort(pair.begin(), pair.end());
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
	int target;
	cout << "Enter Target: ";
	cin >> target;
	vector<vector<int> > pair = pairSum(arr, target);
   for(int i=0; i<pair.size(); i++) {
      for(int j=0; j<pair[i].size(); j++) {
         cout << pair[i][j] << " ";
      }
      cout << endl;
   }
}