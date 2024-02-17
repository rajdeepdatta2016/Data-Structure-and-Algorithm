#include<bits/stdc++.h>
using namespace std;

int findEquilibrium(int* arr, int n) {
    int leftSum = 0, rightSum = 0, index = -1;;
    for(int i=1; i<n; i++) {
        rightSum += arr[i];
    }
    if(leftSum == rightSum) return 0;
    for(int i=1; i<n; i++) {
        leftSum += arr[i-1];
        rightSum -= arr[i];
        if(leftSum == rightSum) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int index = findEquilibrium(arr, n);
    if(index == -1) cout << "There is no Equilibrium Index" << endl;
    else cout << "Equilibrium Index is = " << index << endl;
    delete [] arr;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...