#include<bits/stdc++.h>
using namespace std;

int maxOfCircularSubArray(int * arr, int n) {
    int totalSum = 0, nonContSum = INT_MIN, currSum = 0;
    for(int i=0; i<n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    for(int i=0; i<n; i++) {
        currSum+=arr[i];
        nonContSum =  max(nonContSum, currSum);
        if(currSum < 0) currSum = 0;
    }
    nonContSum = -nonContSum;
    return totalSum - nonContSum;
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int sum = maxOfCircularSubArray(arr, n);
    cout << "Maximum Sum of Circular Sub Array is = " << sum << endl;
    delete [] arr;
}