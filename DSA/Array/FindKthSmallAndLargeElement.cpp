#include<iostream>
#include<vector>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int> kthElement;
	sort(arr.begin(), arr.end());
	int x = arr[k-1];
	kthElement.push_back(x);
	x = arr[n-k];
	kthElement.push_back(x);
	return kthElement;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
	int pos;
	cout << "Enter which Point of element you want to see: ";
	cin >> pos;
	vector<int> res = kthSmallLarge(arr, n, pos);
	vector<int> :: iterator i = res.begin();
	for(; i != res.end(); i++) cout << *i << " ";
}