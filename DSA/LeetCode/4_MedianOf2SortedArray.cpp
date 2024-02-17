#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    vector<int> merged;
    for(int i=0; i<n; i++) {
        merged.push_back(nums1[i]);
    }
    for(int i=0; i<m; i++) {
        merged.push_back(nums2[i]);
    }

    sort(merged.begin(), merged.end());

    int size = merged.size();
    if(size % 2 == 1) {
        return static_cast<double>(merged[size/2]);
    }
    else {
        int mid1 = merged[size/2];
        int mid2 = merged[size/2-1];
        return (static_cast<double>(mid1) + static_cast<double>(mid2))/2.0;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "Enter 1st Array Element (Sorted): " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter 2nd Array Element (Sorted): " << endl;
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }
    double median = findMedianSortedArrays(arr1, arr2);
    cout << "Median of Both Sorted Array is = " << median << endl;
}