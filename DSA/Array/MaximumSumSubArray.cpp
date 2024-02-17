#include<bits/stdc++.h>
using namespace std;

int maximumSum(int* arr, int n) {
    int st = 0, en = 0, currSum=0, maxSum=0;
    while(st < n) {
        currSum += arr[en];
        maxSum = max(currSum, maxSum);
        if(en+1 >= n) {
            st++;
            en = st;
            currSum = 0;
        } else en++;
    }
    return maxSum;
}

int main() {
    int n, sum;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sum = maximumSum(arr, n);
    cout << "Maximum Sum = " << sum << endl;
    delete [] arr;
}

// O(nlogn) Time Complexity...