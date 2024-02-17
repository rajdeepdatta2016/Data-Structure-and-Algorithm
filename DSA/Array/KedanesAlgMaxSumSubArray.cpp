#include<bits/stdc++.h>
using namespace std;

int maximumSum(int* arr, int n) {
    int currSum=0, maxSum=0;
    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) currSum = 0;
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

// O(n) Time Coplexity...