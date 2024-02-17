#include<bits/stdc++.h>
using namespace std;

void find(int* arr, int left, int right, int key) {
    if(left > right) return;
    else {
        int mid = left + (right-left)/2;
        if(arr[mid] == key) cout << key << " ";
        else if(key < arr[mid]) find(arr, left, mid-1, key);
        else find(arr, mid+1, right, key);
    }
}

void findCommonElement(int* minArr, int* maxArr, int minSize, int maxSize) {
    for(int i=0; i<maxSize; i++) {
        find(minArr, 0, minSize-1, maxArr[i]);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    cout << "Enter Element for 1st Array:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter Element for 2nd Array:" << endl;
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }
    if(n < m) {
        sort(arr1, arr1+n);
        findCommonElement(arr1, arr2, n, m);
    } else {
        sort(arr2, arr2+m);
        findCommonElement(arr2, arr1, m, n);
    }
}

// Time Complexity = O(nlogm) if(m < n)...
// Space Complexity = O(logm) if(m < n)...