#include<bits/stdc++.h>
using namespace std;
int findSum(int* arr, int start, int end) {
    int sum = 0;
    for(int i=start; i<=end; i++) {
        sum+=arr[i];
    }
    return sum;
}

int sumOfSubArrays(int* arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            sum += findSum(arr, i, j);
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int sum = sumOfSubArrays(arr, n);
    cout << "Sum of all Subarrays = " << sum << endl;
    delete [] arr;
}