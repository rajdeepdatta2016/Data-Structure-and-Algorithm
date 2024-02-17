#include<iostream>
using namespace std;

void reverse(int* arr, int left, int right) {
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void rotate(int *arr, int d, int n)
{
    if(d >= n && n != 0) d = d%n;
    else if(n == 0) return;
    reverse(arr, 0, n-1);
    reverse(arr, 0, n-d-1);
    reverse(arr, n-d, n-1);
}

int main() {
    int n, r;
    cin >> n >> r;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    rotate(arr, r, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...