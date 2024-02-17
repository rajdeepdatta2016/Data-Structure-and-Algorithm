#include<bits/stdc++.h>
using namespace std;
void revArray(int arr[], int n) {
    int s=0, e=n-1;
    while(s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    revArray(arr,n);
    cout << endl << "Reverse Array is :" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}