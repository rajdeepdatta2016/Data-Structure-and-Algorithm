#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSubArray(int* arr, int n) {
    int currSize = 2 , maxSize = 2;
    int pd = arr[1] - arr[0];
    for(int i=2; i<n; i++) {
        if(pd == arr[i] - arr[i-1]) currSize++;
        else {
            pd = arr[i] - arr[i-1];
            currSize = 2;
        }
        maxSize = max(currSize, maxSize);
    }
    return maxSize;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max = longestConsecutiveSubArray(arr, n);
    cout << "Size of Longest Arithemetic Subarray is = " << max << endl;
    delete [] arr;
}