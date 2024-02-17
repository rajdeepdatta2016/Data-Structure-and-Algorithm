#include<bits/stdc++.h>
using namespace std;

void findCommonElement(int* arr1, int* arr2, int n, int m) {
    int left = 0, right = 0;
    while(left < n && right < m) {
        if(arr1[left] == arr2[right]) {
            cout << arr1[left] << " ";
            left++;
            right++;
        } else if(arr1[left] < arr2[right]) left++;
        else right++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int* arr1 = new int[n];
    int* arr2 = new int[m];
    cout << "Enter 1st Array Element: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter 2nd Array Element: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    findCommonElement(arr1, arr2, n, m);
    delete [] arr1;
    delete [] arr2;
}

// Time Complexity = O(nlogn + mlogm) => O(nlogn) if (m < n)...
// Space Complexity = O(logn) if (m < n)...