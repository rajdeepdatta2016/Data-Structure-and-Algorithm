#include<bits/stdc++.h>
using namespace std;

// Driver Code
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "The Array is:" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
}