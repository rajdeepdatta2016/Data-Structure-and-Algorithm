#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int>& arr) {
    int start = 0, end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start < end) {
        if(arr[mid] >= arr[0]) start = mid + 1;
        else end = mid;
        mid = start + (end - start)/2;
    }
    return arr[mid];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int el = findPivot(arr);
    cout << "The Pivot value is = " << el << endl;
}