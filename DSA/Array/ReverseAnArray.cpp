#include<bits/stdc++.h>
using namespace std;
void revArray(int a[], int b[], int n) {
    for(int i=0; i<n; i++) {
        b[n-1-i] = a[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n], rev[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    revArray(arr,rev,n);

    cout << endl << "The Reverse Array is :" << endl;
    for(int i=0; i<n; i++) {
        cout << rev[i] << " ";
    }
}