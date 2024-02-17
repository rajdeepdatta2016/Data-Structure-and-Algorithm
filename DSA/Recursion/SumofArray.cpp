#include<iostream>
using namespace std;

int sum(int* arr, int size) {
    if(size == 0) return 0;
    int ans = arr[0] + sum(arr+1, size-1);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int sumOfArray = sum(arr, n);
    cout << "The Sum of The Array is = " << sumOfArray;
}