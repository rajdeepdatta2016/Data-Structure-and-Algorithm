#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    int arr[n], mx = INT_MIN;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Array is : " << endl;
    for(int i=0; i<n; i++) {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
}