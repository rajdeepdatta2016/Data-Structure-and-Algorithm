#include<bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(int* arr, int n) {
    for(int i=0; i<n; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j=0; j<=i-1; j++) {
            leftSum += arr[j];
        }
        for(int j=i+1; j<n; j++) {
            rightSum += arr[j];
        }
        if(leftSum == rightSum) return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int index = findEquilibriumIndex(arr, n);
    if(index == -1) cout << "There is No Equilibrium Index" << endl;
    else cout << "Equilibrium Index is = " << index << endl;
    delete [] arr;
}

// Time Complexity = O(n^2)...
// Space Complexity = O(1)...